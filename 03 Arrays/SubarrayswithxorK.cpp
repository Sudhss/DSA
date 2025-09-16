#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int>& nums, int k) {
    int count = 0;
    int xr = 0;
    map<int,int> st;
    st[xr]++;
    int n = nums.size();
    for(int i=0;i<n;i++){
        xr ^= nums[i];
        int x  = xr^k;
        count+= st[x];
        st[xr]++;
    }
    return count;
}

int main() {
    vector<pair<vector<int>, int>> testCases = {
        {{4,2,2,6,4}, 6},     // expected 4
        {{5,6,7,8,9}, 5},     // expected 2
        {{1,2,3,4}, 4},       // expected 2
        {{0,0,0,0}, 0},       // expected 10
        {{1}, 1}              // expected 1
    };

    vector<int> expected = {
        4,
        2,
        2,
        10,
        1
    };

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        auto nums = testCases[i].first;
        int k = testCases[i].second;
        int result = subarraysWithXorK(nums, k);

        cout << "Test case " << i+1 << ": " << result << endl;

        if(result == expected[i]) passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
