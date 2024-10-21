// C++ Program to right rotate the array by d positions
// by rotating one element at a time
// Time Complexity: O(n * d)
// Auxiliary Space: O(1)
#include <iostream>
#include <vector>
using namespace std;

void rotateArr(vector<int>& arr, int d){

    int n = arr.size();
    for( int i = 0; i < d; ++i ){

        int last = arr[n-1];
        for(int j = n-1; j>0; --j){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
}

int main() {

    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}