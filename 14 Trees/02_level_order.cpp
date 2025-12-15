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

vector<vector<int>> LevelOrder(Node* root){
    vector<vector<int>> ans;
    queue<Node*> q;
    if(!root) return ans;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0 ;i<size;i++){
            Node* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);


    auto res = LevelOrder(root);
    for(auto &level : res){
        for(int x : level) cout << x << " ";
        cout << "\n";
    }

}

//         1
//       /   \
//     2       3
//    / \     / \
//   4   5   6   7