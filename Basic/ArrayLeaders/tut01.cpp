// [Naive Approach] Using Nested Loops – O(n^2) Time and O(1) Space
/*
Given an array arr[] of size n, the task is to print all the Leaders in the array.
An element is a Leader if it is greater than all the elements to its right side.
Note: The rightmost element is always a leader.
*/
#include <bits/stdc++.h>
using namespace std;

// Function to find the leaders in an array
vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        int j;

        // Check elements to the right
        // of the current element
        for (j = i + 1; j < n; j++) {

            // If a larger element is found,
            // break the loop
            if (arr[i] < arr[j])
                break;
        }

        // If no larger element was found,
        // the current element is a leader
        if (j == n) 
            res.push_back(arr[i]);

    }
    
    return res;
}

int main() {

    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> result = leaders(arr);

    for (int res : result) {
        cout << res << " ";
    }
    
    cout << endl;

    return 0;
}
