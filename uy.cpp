#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            cout << "Pivot Index: " << i;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "Pivot Index: -1";

    return 0;
}