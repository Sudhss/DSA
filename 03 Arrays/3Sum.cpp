#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> st;
    int n = nums.size();
    for(int i = 0;i<n;i++){
        for (int j = i+1;j<n;j++){
            for (int k = j+1;k<n;k++){
                if (nums[i] + nums[j] + nums[k] == 0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
}

int main() {
    vector<vector<int>> testCases = {
        {-1,0,1,2,-1,-4},
        {0,1,1},
        {0,0,0},
        {-2,0,1,1,2},
        {-1,0,1,0}
    };

    vector<vector<vector<int>>> expected = {
        {{-1,-1,2}, {-1,0,1}},
        {},
        {{0,0,0}},
        {{{-2,0,2}, {-2,1,1}}},
        {{-1,0,1}}
    };

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        vector<vector<int>> result = threeSum(testCases[i]);

        // sort each triplet
        for(auto &v : result) sort(v.begin(), v.end());
        for(auto &v : expected[i]) sort(v.begin(), v.end());

        // sort the vector of triplets
        sort(result.begin(), result.end());
        sort(expected[i].begin(), expected[i].end());

        cout << "Test case " << i+1 << ": ";
        for(auto &triplet : result) {
            cout << "[";
            for(int num : triplet) cout << num << " ";
            cout << "] ";
        }
        cout << endl;

        if(result == expected[i]) passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
