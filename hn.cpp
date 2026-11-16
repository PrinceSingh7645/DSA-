
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    int n = arr.size();

    int product1 = arr[n-1] * arr[n-2] * arr[n-3];

    int product2 = arr[0] * arr[1] * arr[n-1];

    return max(product1, product2);
}

int main() {
    vector<int> arr = {10, 3, 5, 6, 20};

    cout << maximumProduct(arr);

    return 0;
}
