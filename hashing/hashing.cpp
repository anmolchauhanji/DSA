#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={5,1,6,1,5,2,6,1,2,1};
     vector<int> hash(10, 0);
    for (int i = 0; i < 10; i++)
    {
       hash[arr[i]]++; // this line doing the arr elemnt count on hash vector 
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[arr[i]]>0)
        {
            cout<<arr[i]<<" "<<hash[arr[i]]<<endl;
            hash[arr[i]]=0; // why i did this if you iterate agin without doing this you'll get each value count whenever it appear and this line doing that the arr element value count which is in hash it count = 0 
        }
        
    }
    
return 0;
}