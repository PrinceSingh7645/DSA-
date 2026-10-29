
#include <iostream>
using namespace std;

int firstBadVersion(int n, int bad) {
    int left = 1, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (mid >= bad) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n = 5;
    int bad = 4;

    cout << firstBadVersion(n, bad);

    return 0;
}
