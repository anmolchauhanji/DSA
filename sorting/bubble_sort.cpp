#include <iostream>
using namespace std;
int main(){
    int swapp = 0;
    int arr[]={5,4,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n-1; i>=0; i--) // [5 4 3 2 1 ] here i is start from 3 
    {
        for (int j = 0; j <= i-1; j++) // here i-1 i used beacause we have to iterate on  4 elem and 5th one is already in pair of 4th

        {
            if (arr[j]>arr[j+1] )  
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<< endl;
    }
    
    return 0;
}