// How to Delete in a Sorted Array?
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){

    int high = size-1, low = 0;
    int mid = (low + high)/2;

    while ( low <= high ){

        if( arr[mid] == target){
            return mid;
        }else if( target > arr[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return -1;
}

int deleteElement(int arr[], int size, int target){

    if (pos == -1) {
        cout << "Element not found";
        return size;
    }

    int indexOfElement = binarySearch(arr, size, target);
    for(int i=indexOfElement; i < size-1 ;++i){
        arr[i] = arr[i+1];
    }

    return ( size - 1 );
}


int main()
{
    int i;
    int arr[] = { 10, 20, 30, 40, 50 };

    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    cout << "Array before deletion\n";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    // Function call
    size = deleteElement(arr, size, target);

    cout << "\n\nArray after deletion\n";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}