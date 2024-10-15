// Delete Operation:
#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int target){

bool isNumberExist = false;
    for(int i=0; i<size; ++i){
        
        if(arr[i] == target){
            isNumberExist = true;
            size-=1;
            for(int j=i; j<size-1; ++j){
                arr[j] = arr[j+1];
            }
        }

    }

    if( !isNumberExist ){
        cout << "The number doesn't exist in the array";
    }
}
int main (){

    int arr[] = { 10, 50, 30, 40, 20 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 30;

    cout << "Before Deletion: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    deleteElement(arr, size, target);

    cout << "\nAfter Deletion: ";
    for (int i = 0; i < size ; i++)
        cout << arr[i] << " ";

    return 0;
}

/* Answer from GeeksForGeeks

        #include <iostream>
        using namespace std;

        // To search a key to be deleted
        int findElement(int arr[], int n, int key);

        // Function to delete an element
        int deleteElement(int arr[], int n, int key)
        {
            // Find position of element to be deleted
            int pos = findElement(arr, n, key);

            if (pos == -1) {
                cout << "Element not found";
                return n;
            }

            // Deleting element
            int i;
            for (i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];

            return n - 1;
        }

        // Function to implement search operation
        int findElement(int arr[], int n, int key)
        {
            int i;
            for (i = 0; i < n; i++)
                if (arr[i] == key)
                    return i;

            return -1;
        }

        // Driver's code
        int main()
        {
            int i;
            int arr[] = { 10, 50, 30, 40, 20 };

            int n = sizeof(arr) / sizeof(arr[0]);
            int key = 30;

            cout << "Array before deletion\n";
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";
            
        
            // Function call
            n = deleteElement(arr, n, key);

            cout << "\n\nArray after deletion\n";
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";

            return 0;
        }

*/