// Iterative approach – O(n) Time and O(1) Space
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr){

    int n = arr.size();
    for( int i=0; i<n; ++i){
        if (arr[i] > arr[i+1])
            return false;
    }

    return true;
}

int main()
{
    vector<int> arr = { 20, 23, 23, 45, 78, 88 };
    cout << (isSorted(arr) ? "Yes\n" : "No\n");
    return 0;
}
//     cout << (isSorted(arr) ? "Yes\n" : "No\n");
//     return 0;

// }