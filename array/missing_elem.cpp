#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int missing(vector<int> &arr,int n) {
        int sum = ((n+1)*((n+1)+1))/2;
        int add=0;
        
      for (int  i = 0; i < n; i++)
      {
        add+=arr[i];
      }
      int result=sum-add;
      if (result==0)
      {
return -1;
      }
      return result;

   
    }
};
int main() {
    Solution sol;
    vector<int> arr = {1,3,4};
    int n= arr.size();
    cout << "missing elem " << sol.missing(arr,n) << endl;
    cout << "missing elem " << n << endl;
    // cout << "last  index : " << sol.last(arr,4) << endl;
    return 0;
}
