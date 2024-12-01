import os
import subprocess
import sys
import logging


'''
loging into file
# Set the log file path and ensure the directory exists
log_file_path = os.path.join(os.getcwd(), 'Running_logs.log')

# Configure the logger
logging.basicConfig(
    filename=log_file_path,      # Log file location
    level=logging.INFO,          # Minimum log level
    format='%(asctime)s - %(levelname)s - %(message)s',  # Log format
    filemode='a'                 # Append mode to keep adding logs
)

logger = logging.getLogger()
'''

# Set up logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger()

def check_file_exists(file_path):
    """Check if the specified file exists."""
    if not os.path.exists(file_path):
        logger.error(f"File not found: {file_path}")
        return False
    return True

def compile_cpp(current_file):
    """Compile and run a C++ file."""
    executable = os.path.splitext(current_file)[0]
    commands = [
        f"g++ \"{current_file}\" -o \"{executable}\"",
        f"\"{executable}\" < input.txt > output.txt"
    ]
    return commands, executable

def run_python(current_file):
    """Run a Python file."""
    commands = [f"python \"{current_file}\" < input.txt > output.txt"]
    return commands

def compile_java(current_file):
    """Compile and run a Java file."""
    class_name = os.path.splitext(current_file)[0]
    commands = [
        f"javac \"{current_file}\"",
        f"java -cp . \"{class_name}\" < input.txt > output.txt"
    ]
    return commands

def run_javascript(current_file):
    """Run a JavaScript file using Node.js."""
    commands = [f"node \"{current_file}\" < input.txt > output.txt"]
    return commands

def cleanup(executable):
    """Delete the executable after running."""
    if os.path.exists(executable):
        os.remove(executable)
        logger.info(f"Deleted executable: {executable}")
    else:
        logger.warning(f"Executable not found for cleanup: {executable}")

def main():
    # Get the current file name and extension
    current_file = os.getenv("VSCODE_FILE")
    if not current_file:
        logger.error("Error: No file detected.")
        return

    file_extension = os.path.splitext(current_file)[1]
    
    # Check the input file
    if not check_file_exists('input.txt'):
        return

    # Prepare the appropriate commands based on file extension
    if file_extension == ".cpp":
        commands, executable = compile_cpp(current_file)
    elif file_extension == ".py":
        commands = run_python(current_file)
        executable = None
    elif file_extension == ".java":
        commands = compile_java(current_file)
        executable = None
    elif file_extension == ".js":
        commands = run_javascript(current_file)
        executable = None
    else:
        logger.error(f"Unsupported file type: {file_extension}")
        return

    # Run the commands
    for command in commands:
        logger.info(f"Executing command: {command}")
        try:
            result = subprocess.run(command, shell=True, check=True)
            logger.info(f"Command succeeded: {command}")
        except subprocess.CalledProcessError as e:
            logger.error(f"Command failed: {command}")
            logger.error(f"Error: {e}")
            break
    
    # Cleanup the executable after execution (if it's a C++ file)
    if executable:
        cleanup(executable)

if __name__ == "__main__":
    main()
