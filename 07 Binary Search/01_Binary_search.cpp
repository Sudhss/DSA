#include <bits/stdc++.h>

using namespace std;
int Binary_search(int *arr,int target,int n){
    int low = 0;
    int high = n-1;
    while (low<=high){
        int mid = low + (high-low)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target = 10;
    if(int ans = Binary_search(arr,target,n) != -1) cout << "Found at index : " << ans;
    else cout << "Not found";
    return 0;
}