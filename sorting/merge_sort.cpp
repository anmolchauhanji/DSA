#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int high, int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge the two halves in sorted order
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Add remaining elements from the left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Add remaining elements from the right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged array back to the original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[low + i] = temp[i];
    }
}

void sort(int arr[], int low, int high)
{
    if (low < high)  // Correct base case
    {
        int mid = (low + high) / 2;

        // Recursively divide the array
        sort(arr, low, mid);
        sort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, high, mid);
    }
}

int main()
{
    int arr[] = {5, 4, 2, 5, 4, 52};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Perform merge sort
    sort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
