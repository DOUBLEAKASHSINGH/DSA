#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <memory>
using namespace std;


struct Node{
    int data;
    struct Node* left, *right;
    Node(int value){
        data = value;
        left = right = nullptr;
    }
};

void preorder(struct Node* node){
    if(node == nullptr) {
        return;
    }

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    preorder(root);

    return 0;
    

    // Memory cleanup       
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

}