// Find the maximum of Array using Library Function:
// Time complexity: O(N), since the in-built max_element() function takes O(N) time.
/// Auxiliary Space: O(1), as only an extra variable is created, which will take O(1) space.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int largest(int arr[], int n){
    return *max_element(arr, arr + n);
}

int main()
{
    int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    cout << largest(arr, n);
    return 0;
}