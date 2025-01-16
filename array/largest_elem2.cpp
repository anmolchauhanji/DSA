#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++){ 
            int large = arr[i];
           for (int j = 0; j < n; j++)
           {
            if (arr[i]<arr[j])
            {
                large = arr[j];
                break;
            }
            
           }
           return large;
        }
        
    }
};


int main() {
    Solution sol;
    vector<int> arr = {55,52,5,652,5,55,5,5};
    cout << "Largest element: " << sol.largest(arr) << endl;
    return 0;
}
