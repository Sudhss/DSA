#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for (int a = 0;a<n;a++){
        if (a > 0 && nums[a] == nums[a - 1]) continue;
        for (int b = a+1;b<n;b++){
            if (b > a+1 && nums[b] == nums[b - 1]) continue;
            int c = b+1;
            int d = n-1;
            while (c<d){
                long long sum = 1LL * nums[a] + nums[b] + nums[c] + nums[d];
                if (sum == target){
                    vector<int> temp = {nums[a],nums[b],nums[c],nums[d]};
                    res.push_back(temp);
                    c++;
                    d--;
                    while (c < d && nums[c] == nums[c-1]) c++;
                    while (c < d && nums[d] == nums[d+1]) d--;
                }
                else if (sum < target) c++;
                else d--;
            }
        }
    }
    return res;
}

int main() {
    vector<pair<vector<int>, int>> testCases = {
        {{1,0,-1,0,-2,2}, 0},      // classic 4sum
        {{2,2,2,2,2}, 8},          // all same numbers
        {{-2,-1,-1,1,1,2,2}, 0},   // multiple duplicates
        {{0,0,0,0}, 0},            // all zeros
        {{-3,-1,0,2,4,5}, 2}       // random
    };

    vector<vector<vector<int>>> expected = {
        {{-2,-1,1,2}, {-2,0,0,2}, {-1,0,0,1}},
        {{2,2,2,2}},
        {{-2,-1,1,2}, {-1,-1,1,1}},
        {{0,0,0,0}},
        {{-3,-1,2,4}}
    };

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        auto nums = testCases[i].first;
        int target = testCases[i].second;
        vector<vector<int>> result = fourSum(nums, target);

        // sort each quadruplet
        for(auto &v : result) sort(v.begin(), v.end());
        for(auto &v : expected[i]) sort(v.begin(), v.end());

        // sort the vector of quadruplets
        sort(result.begin(), result.end());
        sort(expected[i].begin(), expected[i].end());

        cout << "Test case " << i+1 << ": ";
        for(auto &quad : result) {
            cout << "[";
            for(int num : quad) cout << num << " ";
            cout << "] ";
        }
        cout << endl;

        if(result == expected[i]) passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
