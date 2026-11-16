
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool findPair(vector<int>& arr, int k) {
    unordered_set<int> s;

    for (int num : arr) {
        if (s.count(num + k) || s.count(num - k)) {
            return true;
        }
        s.insert(num);
    }

    return false;
}

int main() {
    vector<int> arr = {5, 20, 3, 2, 50, 80};
    int k = 78;

    cout << (findPair(arr, k) ? "True" : "False");

    return 0;
}
