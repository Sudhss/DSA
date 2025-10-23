#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int data1,Node* next1 = nullptr){
            data = data1;
            next = next1;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node* head = new Node(12);
    cout << head->data;
    return 0;
}