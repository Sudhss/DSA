#include <bits/stdc++.h>
using namespace std;
int lower_bound(int *arr, int n, int x)
{
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int upper_bound(int *arr, int n, int x)
{
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    int res = lower_bound(arr, n, x);
    if (res != n)
        cout << res << endl;
    else
        cout << "Lower Not Found";
    int res1 = upper_bound(arr, n, x);
    if (res != n)
        cout << res1 << endl;
    else
        cout << "Upper Not Found";

    return 0;
}