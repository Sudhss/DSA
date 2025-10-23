#include <bits/stdc++.h>
using namespace std;

int Longest_Subarray(vector<int> arr, int n, int k)
{
    int l = 0, r = 0, sum1 = 0, maxLen = 0;
    while (r < n)
    {
        sum1 += arr[r];
        if(sum1 > k && l <= r){ 
            sum1 -= arr[l];
            l++;
        }
        if (sum1 <= k) maxLen = max(maxLen, r - l + 1);
        r++;
    }
    return maxLen;
}
int main(){
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 15;
    cout << "Longest Window Length is " << Longest_Subarray(arr, arr.size(), k) << endl;
}
