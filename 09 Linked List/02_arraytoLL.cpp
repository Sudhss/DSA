#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Node* node = new Node()
Node* Create_LL(vector<int> arr){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        Node* neww = new Node(arr[i]);
        curr->next = neww;
        curr = neww;
    }
    return dummy->next;
}
void PrintLL(Node* head){
    Node* curr = head;
    while(curr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1,2,3,4,5,6};
    Node* head = Create_LL(arr);
    PrintLL(head);


    return 0;
}