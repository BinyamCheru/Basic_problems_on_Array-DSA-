// Iterative Approach
#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int>& arr){
    int n = arr.size();

    for (int i=0; i<n; ++i){

        for(int j=i; j<n; ++j){

            for(int k = i; k <= j; ++k){
                cout << arr[k] << "  ";
            }
            cout << endl;
        }
        
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << "All Non-empty Subarrays\n";
    subArray(arr);
    return 0;
}