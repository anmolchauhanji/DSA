#include <iostream>
#include <cmath>
using namespace std;

double sqaure(int target) {
    if (target == 0) return 0;
    
    double s = 0, e = target, mid = s + (e - s) / 2.0, square, ans;
    double precision = 0.0001; // Define precision to stop the search
    
    while (e -s> precision) {  // Continue while the difference is greater than precision
        square = mid * mid;
        
        if (square == target) {
            return mid;  // Exact match found
        } else if (square > target) {
            e = mid - precision;  // Narrow the range
        } else {
            s = mid + precision;  // Narrow the range
            ans = mid;  // Store the closest approximation
        }
        
        mid = s + (e - s) / 2.0;  // Update mid to the new midpoint
    }
    
    return ans;  // Return the best approximation found
}

int main() {
    int target = 10;
    cout << "Square root of " << target << " is approximately: " << sqaure(target) << endl;
    return 0;
}
