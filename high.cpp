
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) {
            return n;
        }

        int k = 2;

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "Length: " << k << endl;
    cout << "Array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
