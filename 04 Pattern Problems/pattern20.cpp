#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j<n+1;j++){
            cout << " ";
        }
        for(int k = 0;k<n-i-1;k++){
        cout << " ";
        }
        for(int l = 0;l<2*i+1;l++){
            cout << "*";
        }
    cout << endl;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n+2;j++){
            if(i == n-1 || j ==0 || j == n+1) cout << "e";
            else cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the Value of N : ";
    cin >> n;
    if(!(n&1)) {
        cout << "Please Enter a Odd number" ;
        return 0;
    }
    pattern(n);
    return 0;


}