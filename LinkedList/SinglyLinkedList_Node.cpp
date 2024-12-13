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




int main(){

    
    Node *temp = nullptr;
    Node *one = new Node(1);
    Node *two = new Node(2);
    
    temp = one;
    one->next = two;

    cout<< temp<<endl;

    cout<< one<<" "<<one->data<<" "<< one->next<<endl;
    cout<< two<<" "<<two->data<<" "<< two->next<<endl;


    return 0;
}