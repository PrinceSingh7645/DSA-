
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumSum(vector<int>& arr) {

    int n = arr.size();

    // Maximum sum without deletion
    vector<int> left(n);

    // Maximum sum with one deletion
    vector<int> right(n);

    left[0] = arr[0];

    for (int i = 1; i < n; i++) {
        left[i] = max(arr[i], left[i - 1] + arr[i]);
    }

    right[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(arr[i], right[i + 1] + arr[i]);
    }

    int answer = left[0];

    for (int i = 0; i < n; i++) {
        answer = max(answer, left[i]);
    }

    // Try deleting each element
    for (int i = 1; i < n - 1; i++) {
        answer = max(answer, left[i - 1] + right[i + 1]);
    }

    return answer;
}

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size";
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum subarray sum: "
         << maximumSum(arr);

    return 0;
}
