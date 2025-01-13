#include  <iostream>
using namespace std;
int main(){
int arr []={1,5,2,6,4,5,23,42,6,15,25,2,65,2,5};
int n =  sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n-2; i++) //(n-2) the last 2 array set will not need to sort beacuse those will already sorted 
{ int min =i; // min - i means i am giving or supposing minimum elem is index i 
    for (int  j = i; j < n-1; j++) // (n-1 ) on first elem we cant work on it  
    {
        if (arr[j]<arr[min])  // if index j of arr is greater than min that initialised 0  thenmin = j it it iterate on all elem of arr expect first one  that is sorted 
        {
            min = j;
        }
        
    }
    swap(arr[min],arr[i]); // swapped 
}
for (int i = 0; i < n; i++)
{
   cout << arr[i]<< " "<<endl;
}

return 0;
}
