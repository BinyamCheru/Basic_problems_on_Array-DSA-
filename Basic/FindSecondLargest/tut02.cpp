// [Better Approach] Two Pass Search – O(n) Time and O(1) Space
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// function to find the second largest element in the array
int getSecondLargest(vector<int> &arr) {
    int n = arr.size();

    int largest = -1, secondLargest = -1;

    // finding the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // finding the second largest element
    for (int i = 0; i < n; i++) {

        // Update second largest if the current element is greater
        // than second largest and not equal to the largest
        if ( arr[i] > secondLargest && arr[i] != largest ) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);

    return 0;
}