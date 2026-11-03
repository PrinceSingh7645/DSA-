#include <bits/stdc++.h>
using namespace std;

long long mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;

    long long count = 0;

    count += mergeSort(arr, left, mid);
    count += mergeSort(arr, mid + 1, right);

    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += mid - i + 1;
        }
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= right)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[left + k] = temp[k];

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << mergeSort(arr, 0, n - 1);

    return 0;
}