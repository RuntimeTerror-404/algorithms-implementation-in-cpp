#include <iostream>
#include <queue>
using namespace std;

// create a data type for tree node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// creates a new node for the tree
Node* getNewNode(int value){
    Node* newNode = new Node(); // creates a pointer that contains address of a new node
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// program to insert a node in the tree
Node* insert(Node* root, int value){
    if(root == NULL){
        root = getNewNode(value);
    }
    else if(value <= root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
    return root;
}

// program of traverse the tree in level order traversal
void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* current = q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) q.push(current->left);
        if(current->right != NULL) q.push(current->right);
        q.pop();
    }
}


int main(){
    Node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 11);
    root = insert(root, 110);
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 18);
    root = insert(root, 28);
    root = insert(root, 14);

    levelOrder(root);
    
}