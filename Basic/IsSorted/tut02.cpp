// Recursive approach – O(n) Time and O(n) Space
#include <iostream>
#include <vector>
using namespace std;

// Recursive function that returns true if vector is
// sorted in non-decreasing order.
bool isSorted(const vector<int>& arr, int n)
{
    // Base case
    if (n == 1 || n == 0)
        return true;

    // Check if current and previous elements are in order
    // and recursively check the rest of the array
    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

// Driver code
int main()
{
    vector<int> arr = { 20, 23, 23, 45, 78, 88 };
    cout << (isSorted(arr, arr.size()) ? "Yes\n" : "No\n");
    return 0;
}
