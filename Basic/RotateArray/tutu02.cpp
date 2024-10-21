// C++ Program to right rotate the array by d positions
// using temporary array
// Time complexity: O(n), where n is the size of input array arr[]. 
// Auxiliary Space: O(n)
#include <iostream>
#include <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d){
    int n = arr.size();

    d%=n;
    vector<int> temp(n);
    for (int i = 0; i < d; ++i){
        temp[i] = arr[n-d+i];
    }

    for (int i = 0; i < n - d; ++i){
        temp[d+i] = arr[i];
    }

    for (int i=0; i<n; ++i){
        arr[i] = temp[i];
    }

}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    // Print the rotated vector
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
