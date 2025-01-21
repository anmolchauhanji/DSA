#include <iostream>
#include <vector>
using namespace std;
int sqaure( int target) {
       
        int  s=0,e=target-1,mid = s+(e-s)/2;
        while(s<=e){
          int  square=mid*mid;
            if (square==target)
            {
                return mid;
            }else if(square>target){
                e=mid-1;
            
            }else if(square<target){
                s=mid+1;
            }
            
            mid= s+(e-s)/2;
            
        }
        return -1;
    }


int main()
{
    int target = 9;
    
    cout<<"lower bound"<<sqaure(1024)<<endl;
    return 0;
}
