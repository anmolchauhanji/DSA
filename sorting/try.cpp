#include <iostream>
using namespace std;
int main(){
    int swapp = 0;
    int arr[]={5,4,2,5,4,52,5,1,5,2,5,12,5,1,5,2,54,48,4,582,5,15,52,65,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
          if (arr[j+1]<arr[j])
          {
           swap(arr[j],arr[j+1]);
           swapped = true;
          }
          
        }
          if(!swapped){
            break;
          }
   }
  
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<< endl;
    }
    
    return 0;
}