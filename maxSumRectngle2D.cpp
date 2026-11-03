#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& arr) {
    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(
        rows, vector<int>(cols)
    );

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN;

    for (int left = 0; left < cols; left++) {
        vector<int> temp(rows, 0);

        for (int right = left; right < cols; right++) {

            for (int i = 0; i < rows; i++)
                temp[i] += matrix[i][right];

            maxSum = max(maxSum, kadane(temp));
        }
    }

    cout << maxSum;

    return 0;
}