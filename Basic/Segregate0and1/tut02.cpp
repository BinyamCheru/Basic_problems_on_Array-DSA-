// (Use two indexes to traverse) 
// Time Complexity : O(n) 
// Auxiliary Space: O(1)
#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n){

    int left = 0 , right =  n-1;

    while (left < right){

        while ( arr[left] == 0 && left < right){
            left++;
        }

        while ( arr[right] == 1 && left < right){
            right--;
        }

        if ( left < right){

            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;

        }
    }
}
int main()  
{  
    int arr[] = {0, 1, 0, 1, 1, 1};  
    int i, arr_size = sizeof(arr)/sizeof(arr[0]);  
  
    segregate0and1(arr, arr_size);  
  
    cout << "Array after segregation ";  
    for (i = 0; i < 6; i++)  
        cout << arr[i] << " ";  
    return 0;  
}