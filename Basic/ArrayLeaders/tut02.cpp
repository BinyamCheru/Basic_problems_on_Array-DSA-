// [Expected Approach] Using Suffix Maximum – O(n) Time and O(1) Space:
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders( vector<int>& arr){

    int n = arr.size();
    vector<int> result;

    // The rightmost element is always a leader.
    int maxRight = arr[n-1];
    result.push_back(arr[n-1]);

    for(int i = n-2; i>=0; --i){
       
       if( arr[i] > maxRight ){
        
            maxRight = arr[i];
            result.push_back(maxRight);
       }

    }

    reverse( result.begin(), result.end() );

    return result;
}
int main() {

    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> res = leaders(arr);

    for (int x : res) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}