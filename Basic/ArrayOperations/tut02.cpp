// Coding implementation of inserting an element at the end:
#include <iostream>
using namespace std;

int insertEnd(int arr[], int n, int key, int capacity)
{
    if (n >= capacity)
        return n;

    arr[n] = key;
     return (n + 1);
}

int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6; // here the n represents the actual number of elements in the array
    int i, key = 26;

    cout << "Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    n = insertEnd(arr, n, key, capacity);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
