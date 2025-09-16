#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0) {
                res.push_back({arr[i], arr[j], arr[k]});
                while (j < k && arr[j] == arr[j + 1]) j++;
                while (j < k && arr[k] == arr[k - 1]) k--;
                j++; k--;
            } else if (sum < 0) {
                j++;
            } else {
                k--;
            }
        }
    }
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
