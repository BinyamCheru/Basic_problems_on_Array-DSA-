// Coding implementation of inserting an element at any position:
#include <iostream>
using namespace std;

void insertElement(int arr[], int n, int value, int index){

    for(int i = n; i > index; --i){
        arr[i] = arr[i - 1]; 
    }
    
    arr[index] = value;

}

int main (){

    int arr[15] = { 2, 4, 1, 8, 5 };
    int n = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    int i, value = 10, index = 2;

    cout << "Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    insertElement(arr, n, value, index);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";

    return 0;
}