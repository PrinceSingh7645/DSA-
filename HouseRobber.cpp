
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {
    int prev2 = 0, prev1 = 0;

    for (int money : nums) {
        int curr = max(prev1, prev2 + money);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    vector<int> nums = {2, 7, 9, 10, 1};

    cout << rob(nums);

    return 0;
}
