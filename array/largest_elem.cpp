#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int large = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > large) {
                large = arr[i];
            }
        }
        return large;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {55,52,5,652,5,55,5,5};
    cout << "Largest element: " << sol.largest(arr) << endl;
    return 0;
}
