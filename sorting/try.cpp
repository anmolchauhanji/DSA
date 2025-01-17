#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int swapp = 0;
  int arr[] = {1,1,2,2,3};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> temp;
  for (int i = 1; i < n-1; i++)
  {
    if (arr[i]==arr[i-1])
    {
     temp.push_back(arr[i]);
    }
    if (arr[i]>arr[i-1])
    {
    temp.push_back(arr[i]);
    }
    
  }
  
  
for (int i = 0; i < temp.size(); i++)
{
 cout<<temp[i]<<endl;
}

  
  return 0;
}