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

// program of traverse the tree in pre order traversal
// root -> left Node -> rigth Node
void PreOrder(Node* root){
    if(root == NULL) return;
    else{
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

// program of traverse the tree in in order traversal
// left -> root -> right
void InOrder(Node* root){
    if(root == NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// program to traverse the tree in post order traversal
// left -> right -> root
void PostOrder(Node* root){
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 11);
    root = insert(root, 110);
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 18);
    // levelOrder(root);
    PreOrder(root);
    cout<<endl;
    cout<<endl;
    InOrder(root);
    cout<<endl<<endl;
    PostOrder(root);
}