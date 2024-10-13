// Recursive Approach
#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print all possible subarrays for given array
void printSubArrays(vector<int>& arr, int start, int end) {

    // Stop if we have reached the end of the array
    if (end == arr.size())
        return;

    // Increment the end point and reset the start to 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1);

    // Print the subarray and increment the starting point
    else {
        for (int i = start; i <= end; i++)  
            cout << arr[i] << " ";
        cout << endl;
        printSubArrays(arr, start + 1, end);  
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    printSubArrays(arr, 0, 0);
    return 0;
}   
