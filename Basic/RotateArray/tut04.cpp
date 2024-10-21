// C++ Code to right rotate an array using Reversal Algorithm
// Time Complexity: O(n)
// Auxiliary Space: O(1)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d){

    int n = arr.size();

    // Handle the case where d > size of array
    d %= n;

    // reversing the whole array
    reverse( arr.begin(), arr.end() );

    reverse( arr.begin(), arr.begin() + d );

    reverse( arr.begin() + d, arr.end() );


}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
    rotateArr(arr, d);
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}