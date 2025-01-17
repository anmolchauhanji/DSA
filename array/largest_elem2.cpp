
class Solution {
public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++){ 
            int large = arr[i];
           for (int j = 0; j < n; j++)
           {
            if (arr[i]<arr[j])
            {
                large = arr[j];
                break;
            }
            
           }
           return large;
        }
        
    }
};

