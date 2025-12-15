#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

//Preorder Traversal -> (root,left,right)

void preorder(Node* node){
    if(!node) return;
    
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

//inorder Traversal -> (left,root,right)
void inorder(Node* node){
    if(!node) return;
    
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

//postorder Traversal -> (left,right,root)
void postorder(Node* node){
    if(!node) return;

    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}


int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);


    // DFS -> Preorder Traversal
    cout << "PreOrder : ";
    preorder(root);
    cout << "\n";
    
    // DFS -> Inorder Traversal
    cout << "InOrder : ";
    inorder(root);
    cout << "\n";
    
    // DFS -> Postorder Traversal
    cout << "PostOrder : ";
    postorder(root);
    cout << "\n";
    return 0;
}

//         1
//       /   \
//     2       3
//    / \     / \
//   4   5   6   7
