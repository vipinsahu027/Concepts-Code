#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data; // Stores the data of the node
        Node *Left; // Pointer to the Left child
        Node *Right; // Pointer to the Right child

        Node(int node_data) {
            this->data = node_data; // Initialize node with the given data
            this->Left = nullptr;   // Set the Left pointer to `nullptr`
            this->Right = nullptr;   // Set the Right pointer to `nullptr`
        }
};

void inorder_Traversal(Node *root){
    if(!root){
        return;
    }

    inorder_Traversal(root->Left);
    cout<<root->data<<" ";
    inorder_Traversal(root->Right);
}

int main(){

    
    Node *root = nullptr;
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    
    root = two;
    two->Left = one;
    two->Right = three;

    inorder_Traversal(root);


    return 0;
}