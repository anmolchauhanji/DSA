#include <iostream>
#include <set>
using namespace std;
int main(){
set<int> st;
int arr[]={1,1,2,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    st.insert(arr[i]);
}
for (auto i : st)
{
    cout<<i<<endl;
}
}