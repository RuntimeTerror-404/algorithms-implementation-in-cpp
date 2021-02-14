#include <bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNewNode(int value){
    BstNode* newNode = new BstNode();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
BstNode* insert(BstNode* root, int data){
    if(root = NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

int main(){
    BstNode* root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 19);
    root = insert(root, 25);
    root = insert(root, 13);
    
}