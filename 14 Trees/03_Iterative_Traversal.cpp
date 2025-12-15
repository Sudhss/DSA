#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

// Iterative Preorder
void preorder_iterative(Node* root){
    // stack [] -> for LIFO property
    if(!root){ 
        cout << "Whatt the hell bro, its empty 😭";
        return;
    }   
    stack<Node*> stk;
    stk.push(root);
    while(!stk.empty()){
        Node* node = stk.top();
        stk.pop();
        cout << node->data << " ";
        if(node->right) stk.push(node->right);
        if(node->left) stk.push(node->left);
    }
    cout << "\n\n";
}

void inorder_iterative(Node* root){
    if(!root){ 
        cout << "Whatt the hell bro, its empty 😭";
        return;
    }   
    stack<Node*> stk;
    Node* node = root;
    while(1){
        if(node){
            stk.push(node);
            node = node->left;
        }
        else{
            if(stk.empty()) break;
            node = stk.top();
            stk.pop();
            cout << node->data << " ";
            node = node->right;
        }
    }
    cout << "\n\n";
}
void postorder_iterative(Node* root){
    
    
    
    
    
    cout << "\n\n";
}

int main(){
Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);


    do{
        cout << "Which Iteration :\n1. Preorder\n2. Inorder\n3. Postorder\nChoice : ";
        int n;cin >> n; cout << "\n";
        if(n == 1) preorder_iterative(root);
        else if (n==2) inorder_iterative(root);
        else if(n==3) postorder_iterative(root);
        else cout << "Nigga what!?";
    }while(1);
    return 0;
}


//         1
//       /   \
//     2       3
//    / \     / \
//   4   5   6   7

// 4 -> 5 -> 6 -> 2 -> 1 -> 6 -> 7 -> 3