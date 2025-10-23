#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    static const int n = 10;
    int stk[n];
    int topIndex = -1; 

    bool underflow() {
        return topIndex == -1;
    }

    bool overflow() {
        return topIndex == n - 1;
    }

    bool push(int element) {
        if (overflow()) {
            cout << "Overflow\n";
            return false;
        }
        stk[++topIndex] = element;
        return true;
    }

    void peek() { 
        if (underflow()) {
            cout << "Underflow\n"; return;
        }
        cout << stk[topIndex];
    }

    int pop() {
        if (underflow()) {
            cout << "Underflow\n";
            return -1;
        }
        return stk[topIndex--];
    }
};

int main(){
    Stack s;
    s.push(12);
    s.peek();
    return 0;
}
