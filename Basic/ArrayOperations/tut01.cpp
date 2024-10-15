// Coding implementation of the search operation:
#include <iostream>
using namespace std;

int findNumber(int arr[], int size, int target){

    for(int i=0; i<size; ++i){
        if( arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = { 12, 34, 10, 6, 40 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 40;
    int index = findNumber(arr, size, target);

    if( index == -1)
    {
        cout << "The ellement not found in the array";
    }else{
        cout << "The element is at index: " << index;
    }



    return 0;
}