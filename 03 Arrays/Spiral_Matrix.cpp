#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int n1 = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n1 - 1;
    vector<int> res;
    while (left <= right && top <= bottom)
    {

        // right
        for (int i = left; i <= right; i++)
        {
            res.push_back(matrix[top][i]);
        }
        top++;

        // down
        for (int i = top; i <= bottom; i++)
        {
            res.push_back(matrix[i][right]);
        }
        right--;

        // left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                res.push_back(matrix[bottom][i]);
            bottom--;
        }

        // up
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                res.push_back(matrix[i][left]);
            left++;
        }
    }
    return res;
}

int main()
{
    // Test cases
    vector<vector<vector<int>>> testCases = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
        {{1}},
        {{1, 2}, {3, 4}},
        {{1, 2, 3}, {4, 5, 6}}};

    // Expected results
    vector<vector<int>> expected = {
        {1, 2, 3, 6, 9, 8, 7, 4, 5},
        {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7},
        {1},
        {1, 2, 4, 3},
        {1, 2, 3, 6, 5, 4}};

    int passed = 0;

    for (int i = 0; i < testCases.size(); i++)
    {
        vector<int> result = spiralOrder(testCases[i]);
        cout << "Test case " << i + 1 << ": ";
        for (int num : result)
            cout << num << " ";
        cout << endl;

        if (result == expected[i])
            passed++;
    }

    cout << "Passed " << passed << " out of " << testCases.size() << " test cases." << endl;

    return 0;
}
