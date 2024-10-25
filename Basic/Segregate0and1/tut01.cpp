//  (Count 0s or 1s) 
// Time Complexity : O(2n)  ≅ O(n)
// Auxiliary Space: O(1)
#include <iostream>
using namespace std;

void segregate0and1(int arr[] , int n){

    int count = 0;
    for(int i=0; i<n; ++i){
        if ( arr[i] == 0 )
            count++;
    }

    for(int i=0; i<n; ++i){

        if ( i < count ){
            arr[i] = 0;
        }else{
            arr[i] = 1;
        }

    }

}

void print(int arr[], int n){

    for(int i=0; i<n; ++i){
        cout << arr[i] << "  ";
    }

}
int main() 
{ 
    int arr[] = { 0, 1, 0, 1, 1, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    segregate0and1(arr, n); 
    print(arr, n); 
    return 0; 
} 