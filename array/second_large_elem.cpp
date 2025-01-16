#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int large = arr[0];
        for(int i =1;i<arr.size();i++){
            if(arr[i]>large){
                large =arr[i];
            }
        }
         int seclarge=-1;
        for(int i=0;i<arr.size();i++){
           
            if(arr[i]>seclarge&&arr[i]<large){
                seclarge=arr[i];
            }
        }return seclarge;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {55,52,5,652,5,55,5,5};
    cout << "Largest element: " << sol.getSecondLargest(arr) << endl;
    return 0;
}
