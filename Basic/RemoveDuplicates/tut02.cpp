// Remove duplicates from Sorted Array
// Efficient Approach (O(n) time and O(1) Space)
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr){

    int n = arr.size();
    if( n <= 1)
        return n;

    int index = 1;

    for(int i  = 1; i<n; ++i){

        if ( arr[i] != arr[i-1]){
            arr[index++] = arr[i];
        }

    }

    return index;
}
int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = removeDuplicates(arr);
    for ( int i = 0; i < n; i++ ) 
        cout << arr[i] << " ";
    return 0;
}