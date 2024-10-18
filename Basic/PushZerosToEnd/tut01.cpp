// [Naive Approach] Using Temporary Array – O(n) Time and O(n) Space
// Time complexity: O(n), as we are traversing the array three times.
// Auxiliary Space : O(n), as we are using a temp[] array to move all the zeros.
#include <iostream>
#include <vector>
using namespace std;

void pushZerosToEnd(vector<int> &arr){
    int n = arr.size();
    vector<int> temp(n,0);

    int j=0;
    for(int i=0; i<n; ++i)
    {
        if( arr[i] != 0){
            temp[j] = arr[i];
            j++;f
        }
    }
    
     for(int i=0; i<n; ++i)
    {
        arr[i] = temp[i];  
    }

}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}