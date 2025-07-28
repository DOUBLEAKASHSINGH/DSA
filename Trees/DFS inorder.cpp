#include <stdio.h>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node * left, *right;
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

void inorder(Node* node){
    if(node == nullptr){
        return;
    }

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);

}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    inorder(root);

    return 0;

    // Memory Deallocation
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;
    // Note: In a real application, consider using smart pointers to manage memory automatically.
    // This prevents memory leaks and ensures proper cleanup.
    
}