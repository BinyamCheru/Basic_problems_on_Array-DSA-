// [Naive Approach] Using Sorting – O(n*logn) Time and O(1) Space
/*
Time Complexity: O(n*logn), as sorting the array takes O(n*logn) time and traversing the array can take O(n) time in the worst case, so total time complexity = (n*logn + n) = O(n*logn).
Auxiliary space: O(1), as no extra space is required.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getSecondLargest( vector<int>& arr ){
    int n = arr.size();

    // Sort the array in non-decreasing order
    sort( arr.begin(), arr.end() );

    for (int i = n-2; i >= 0; --i){
        if ( arr[i] != arr[n-1]){
            return arr[i];
        }
    }

    return -1;
}

int main() {
    vector<int> arr = { 12, 35, 1, 10, 34, 1 };
    cout << getSecondLargest(arr);
    return 0;
}