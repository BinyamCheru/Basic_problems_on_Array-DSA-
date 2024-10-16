// Find the largest three distinct elements in an array
// Time Complexity: O(n)
// Auxiliary Space: O(1)
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void print3largest(int arr[], int size){

    if( size < 3){
        cout << "Invalid Input";
        return;
    }

    int first, second, third;
    first = second = third = INT_MIN;

    for( int i = 0; i < size; ++i){
    
        if( arr[i] > first){

            third = second;
            second = first;
            first = arr[i];
        }
        else if( arr[i] < first && arr[i] > second ){
            third = second;
            second = arr[i];
        }
         
        else if( arr[i] < first && arr[i] < second  && arr[i] > third){
            third = arr[i];
        }

    }

    cout << first << "  " << second << "  " << third ;
}
int main() 
{ 
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    print3largest(arr, n); 
    return 0; 
} 