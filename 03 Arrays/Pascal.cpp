#include <bits/stdc++.h>
using namespace std;
vector<int> PascalRow(int row){
    int ans = 1;
    vector<int> res;
    res.push_back(1);
    for(int col =1;col<=row;col++){
        ans = ans * (row-col+1);
        ans = ans / col;
        res.push_back(ans);
    }
    return res;
}

vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> res;
    for (int row = 0;row<n;row++){
        res.push_back(PascalRow(row));
    }
    return res;
}


int main() {
    vector<int> testCases = {1, 2, 3, 5, 6}; // numRows for Pascal's triangle
    vector<vector<vector<int>>> expected = {
        {{1}},
        {{1},{1,1}},
        {{1},{1,1},{1,2,1}},
        {{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1}},
        {{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1},{1,5,10,10,5,1}}
    };

    int passed = 0;
    for(int i = 0; i < testCases.size(); i++) {
        auto result = generatePascal(testCases[i]);
        cout << "Test case " << i+1 << " numRows = " << testCases[i] << ": " << endl;
        for(auto &row : result) {
            for(auto &val : row) cout << val << " ";
            cout << endl;
        }
        if(result == expected[i]) passed++;
        cout << "---------" << endl;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;
    return 0;
}
