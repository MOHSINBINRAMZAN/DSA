#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left, * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertBST(Node* root, int val){
    if(root == nullptr){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }
    return root;
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = nullptr;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    insertBST(root, 9);
    insertBST(root, 11);

    inorder(root);
    cout << endl;

    return 0;
}

