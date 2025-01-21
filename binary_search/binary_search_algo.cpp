#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int binary_search(vector<int> &arr,int key) {
        int n = arr.size(), start = 0, end =n-1, mid=(start+end)/2;
        while (start<=end)
        {
           if (arr[mid]==key)
           {
            return mid;
           }else if(arr[mid]>key)
           {
            end=mid-1;
           }
           else if(arr[mid]<key)
           {
            start=mid+1;
           }
            mid=(start+end)/2;
           
        }
            return -1;
    }   
};
int main() {
    Solution sol;
    vector<int> arr = {5,6,8,9,11,21,36,52};
    int key=53;
    cout << "Largest element: " << sol.binary_search(arr,key) << endl;
    return 0;
}
