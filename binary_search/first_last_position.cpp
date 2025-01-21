#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int first(vector<int> &arr,int key) {
        int n = arr.size(), start = 0, end =n-1, mid=(start+end)/2,ans=-1;
        while (start<=end)
        {
           if (arr[mid]==key)
           {
            ans=mid ;
            end=mid-1;
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
            return ans;
    }   
    int last(vector<int> &arr,int key) {
        int n = arr.size(), start = 0, end =n-1, mid=(start+end)/2,ans=-1;
        while (start<=end)
        {
           if (arr[mid]==key)
           {
            ans=mid ;
            start=mid+1;
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
            return ans;
    }   
};
int main() {
    Solution sol;
    vector<int> arr = {1,2,3,3,3,4,4};
    int key;
    cout << "first index: " << sol.first(arr,3) << endl;
    cout << "last  index : " << sol.last(arr,4) << endl;
    return 0;
}
