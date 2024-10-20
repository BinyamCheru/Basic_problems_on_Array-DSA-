// Using a temporary array – O(n) Time and O(n) Space
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int size){

    vector<int> temp;
     
    int i = size-1, j=0;
    while (i >= 0){

    temp.push_back(arr[i]);
        j++;
        --i;
    }

    for (int i = 0; i < size; ++i){
        arr[i] = temp[i];
    }

}

int main (){

    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    int size = arr.size();
    reverseArray( arr, size);

    for (int i = 0; i < size; ++i){
        cout << arr[i]  << " ";
    }


    return 0;
}