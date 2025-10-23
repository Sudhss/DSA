#include <bits/stdc++.h>

using namespace std;
int lowerbound(vector<int> arr, int x, int n)
{
    unsigned int low = 0;
    unsigned int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        unsigned int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
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
int upperbound(vector<int> arr, int x, int n)
{
    unsigned int low = 0;
    unsigned int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        unsigned int mid = low + (high - low) / 2;
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
    // unsigned int n;
    // if(!(cin >> n)) return -1;
    unsigned int n = 8;
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int x;
    cin >> x;
    int lb = lowerbound(arr, x, n);
    if (lb >= n || arr[lb] != x)
    {
        cout << "{-1,-1}" << endl;
        return -1;
    }

    cout << lb << " " << upperbound(arr, x, n) - 1 << endl;
}
