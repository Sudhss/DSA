#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());








}

int main() {
    vector<vector<int>> testCases = {
        {3,2,3},                // n/a
        {1,1,1,3,3,2,2,2},      // n/a
        {1},                    // n/a
        {1,2},                  // n/a
        {2,2,1,3}               // n/a
    };

    vector<vector<int>> expected = {
        {3},
        {1,2},
        {1},
        {1,2},
        {2}
    };

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        vector<int> result = majorityElement(testCases[i]);
        cout << "Test case " << i+1 << ": ";
        for(int num : result) cout << num << " ";
        cout << endl;
        if(result == expected[i]) passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
