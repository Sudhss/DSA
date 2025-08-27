#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    map<int,int> seen;
    seen[0] = 1;
    int PreSum =0, count = 0;
    for (int i = 0;i<n;i++){
        PreSum+=nums[i];
        int remove  = PreSum - k;
        count += seen[remove];
        seen[PreSum]+=1;
    }
    return count;

}




int main() {
    vector<vector<int>> testCases = {
        {1,2,3,-3,1,1,1,4,2,-3},  //  sum k = 3
        {1,1,1,1},                 // sum k = 2
        {1,2,1,2,1},               // sum k = 3
        {3,4,7,2,-3,1,4,2},        // sum k = 7
        {1,2,3,4,5}                // sum k = 9
    };

    vector<int> ks = {3,2,3,7,9};
    vector<int> expected = {8, 3, 4, 4, 2};

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        int result = subarraySum(testCases[i], ks[i]);
        cout << "Test case " << i+1 << " sum k = " << ks[i] << ": " << result << endl;
        if(result == expected[i]) passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
