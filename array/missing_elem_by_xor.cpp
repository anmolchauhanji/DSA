#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int missing(vector<int> &arr,int n) {
        int res =0;
       for (int i = 1; i < n; i++)
       {
        res+=(arr[i]^i);
        if (res!=0)
       {
        return i;
       }
       }
       
       

   
    }
};
int main() {
    Solution sol;
    vector<int> arr = {1,2,3,5};
    int n= arr.size();
    cout << "missing elem " << sol.missing(arr,n) << endl;
    cout << "missing elem " << n << endl;
    // cout << "last  index : " << sol.last(arr,4) << endl;
    return 0;
}
