import os
import subprocess
import logging

# Set up logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger()

def check_file_exists(file):
    if not os.path.exists(file):
        logger.error(f"File not found: {file}")
        return False
    return True

def compile_cpp(current_file):
    executable = os.path.splitext(current_file)[0] + ".exe"
    commands = [
        f"g++ \"{current_file}\" -o \"{executable}\"",  # Compile the C++ file
        f"\"{executable}\" < input.txt > output.txt"    # Run the executable with input.txt
    ]
    return commands, executable

def run_python(current_file):
    """Run a Python file."""
    commands = [f"python \"{current_file}\" < input.txt > output.txt"]
    return commands

def cleanup(executable):
    if os.path.exists(executable):
        try:
            os.remove(executable)
            logger.info(f"Deleted executable: {executable}")
        except PermissionError:
            logger.error(f"Permission error: Unable to delete {executable}. It may be in use.")
        except Exception as e:
            logger.error(f"Error deleting executable {executable}: {str(e)}")
    else:
        logger.warning(f"Executable not found for cleanup: {executable}")

def main():
    current_file = os.getenv("VSCODE_FILE")
    if not current_file:
        logger.error("Error: No file detected.")
        return

    file_extension = os.path.splitext(current_file)[1]
    
    if file_extension == ".cpp":
        commands, executable = compile_cpp(current_file)
    elif file_extension == ".py":
        commands = run_python(current_file)
        executable = None
    else:
        logger.error(f"Unsupported file type: {file_extension}")
        return

    if not check_file_exists('input.txt'):
        return

    for command in commands:
        logger.info(f"Executing command: {command}")
        try:
            # Set timeout (e.g., 15 seconds)
            result = subprocess.run(command, shell=True, check=True, timeout=15)
            if result.returncode == 0:
                logger.info(f"Command succeeded: {command}")
            else:
                logger.error(f"Command failed: {command} with return code {result.returncode}")
                break
        except subprocess.TimeoutExpired:
            logger.error(f"Command timed out: {command}")
            break
        except subprocess.CalledProcessError as e:
            logger.error(f"Command failed: {command}")
            logger.error(f"Error: {e}")
            break

    if executable:
        cleanup(executable)

if __name__ == "__main__":
    main()
