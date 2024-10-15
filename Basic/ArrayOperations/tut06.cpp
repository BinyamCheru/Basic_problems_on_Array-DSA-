//How to Insert in a Sorted Array?
#include <iostream>
using namespace std;

int insertSorted(int arr[], int lastIndex, int target, int capacity){

    if (lastIndex + 1 >= capacity)
    {
        return 0;
    }

    int i = lastIndex;
    while( i >= 0 && arr[i] > target ){

        arr[i+1] = arr[i];
        --i;

    }

    arr[i+1] = target;

    return(lastIndex+1);
}

int main (){
    
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int lastIndex = 5; // this tis the last index where we find number in our array
    int target = 26;

    cout << "\nBefore Insertion: ";
    for (int i = 0; i < lastIndex; i++)
        cout << arr[i] << " ";

    // Function call
    lastIndex = insertSorted(arr, lastIndex, target, capacity);

    cout << "\nAfter Insertion: ";
    for (int i = 0; i < lastIndex; i++)
        cout << arr[i] << " ";

    return 0;
}