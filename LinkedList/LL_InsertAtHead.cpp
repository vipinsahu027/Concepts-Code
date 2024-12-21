#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data; // Stores the data of the node
        Node *next; // Pointer to the next node in the list

        Node(int node_data) {
            this->data = node_data; // Initialize node with the given data
            this->next = nullptr;   // Set the next pointer to `nullptr`
        }
};

class SinglyLinkedList{
    public:
        Node *head;
    
        SinglyLinkedList(){
            this->head = nullptr;
        }

        void insert_node_head(int node_data){
            Node *temp = new Node(node_data);
            
            if(!head){
                head = temp;
            }
            else{
                temp->next = head;
                head = temp;
            }

        }

        void printLinkedList(Node *head){
            Node *curr = head;
            while(curr){
                string lim = "->";
                if(curr -> next){
                    cout<<curr->data<<lim;
                }
                else{
                    cout<<curr->data;
                }

                curr = curr->next;
            }
        }
};



int main()
{
    SinglyLinkedList* llist = new SinglyLinkedList(); // Create a new linked list

    int llist_count;
    cin >> llist_count; // Read the number of nodes
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item; // Read each node's data
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node_head(llist_item); // Insert the node into the linked list
    }

    llist->printLinkedList(llist->head); // Print the linked list (function is missing)

    return 0;
}