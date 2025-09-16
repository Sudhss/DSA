#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {2, 3, -2, 4};
    int pref = 1, suff = 1, maxi = INT_MIN;
    int n = arr.size()
    for (int i = 0; i < n; i++){
        if (pref  == 0) pref = 1;
        if (suff  == 0) suff = 1;
        pref *= arr[i];
        suff *= arr[n-i-1];
        maxi = max(maxi,max(pref,suff));
    }
    cout << "Max product is " << maxi;
    return 0;
}