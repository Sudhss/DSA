#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,3,6,6,2,1};
    int n = 6;
    sort(arr,arr+n);
    int sum1 = 0;

    for (int a:arr) sum1+=a;
    int expected = (n*(n+1)) /2;
    int i = 0;
    while (arr[i] != arr[i+1]) i++;
    int repeated = arr[i];
    int missing = (expected - sum1) + repeated;
    cout << "Repeated : " << repeated << endl;
    cout << "Missing : " <<  missing;


    
    return 0;

}