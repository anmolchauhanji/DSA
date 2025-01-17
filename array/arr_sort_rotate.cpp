#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; // To count the number of rotations
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            if (count > 1) {
                return false; // More than one rotation needed
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1,2,3};
    cout << "Largest element: " << sol.check(arr) << endl;
    return 0;
}
