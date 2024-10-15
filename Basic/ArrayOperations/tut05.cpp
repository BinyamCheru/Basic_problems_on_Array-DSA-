//How to Search in a Sorted Array? We use the binary search algorithm
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){ // this function will return the index of our target number
    int high = size - 1, low = 0;
    int mid;

    while (low <= high){

        mid = (low+high)/2;

        if( arr[mid] == target){
            return mid;
        }else if( target < arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }

    }

    return -1;
}

int main(){

    int arr[] = { 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr)/sizeof(arr[0]), target = 10;

    int index = binarySearch(arr, size, target);
    if( index == -1 )
    { 
        cout << "The number doesn't found in the array";
    }else{
        cout << "The index of the number: " << index;
    }
    

    return 0;
}