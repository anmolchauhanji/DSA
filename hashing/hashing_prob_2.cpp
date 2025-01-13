#include <iostream>
#include <vector>

using namespace std;
int main(){
    int arr[]={'a','b','a','a','A','z'};
    vector<int> hash(256,0);
    int size =sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < size; i++)
{
    hash[arr[i]]++;
}
for (int i = 0; i < hash.size(); i++)
{
    if (hash[arr[i]]>0){
        cout<<arr[i]<<" "<<hash[arr[i]]<<endl;
    hash[arr[i]]=0;
    }
}
return 0;
}