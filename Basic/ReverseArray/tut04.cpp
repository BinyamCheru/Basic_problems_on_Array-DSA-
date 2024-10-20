// Using Recursion – O(n) Time and O(n) Space
#include <iostream>
#include <vector>
using namespace std;

void reverseArrayRec(vector<int>& arr, int l, int r){
    if ( l >= r)
     return;

    // Swap the elements at the ends
    swap(arr[l], arr[r]);
  
    // Recur for the remaining array
    reverseArrayRec(arr, l + 1, r - 1);
}

void reverseArray(vector<int> &arr){
    int n = arr.size();
    reverseArrayRec(arr, 0, n - 1);
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";

    return 0;
}