#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* getNewNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};
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
};
bool Search(Node* root, int data){
    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(data < root->data){
        return Search(root->left, data);
    }
    else{
        return Search(root->right, data);
    }
}

int main(){
    Node* root = NULL;
    root = insert(root, 13);
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 18);

    int number;
    cout<<"Enter a value to search: ";
    cin>>number;
    if(Search(root,number) == true){
        cout<<number<<" is in tree"<<endl;
    }
    else{
        cout<<number<<" is not in tree"<<endl;
    }
}