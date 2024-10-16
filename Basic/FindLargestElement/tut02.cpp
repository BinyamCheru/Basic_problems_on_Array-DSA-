// Recursive Approach to find the maximum of Array:
// Time Complexity: O(N), where N is the size of the given array. 
// Auxiliary Space: O(N), for recursive calls
// C++ program to find maximum in arr[] of size n
#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element
int largest(int arr[], int n, int i)
{
	// Last index return the element
	if (i == n - 1) {
		return arr[i];
	}

	// Find the maximum from rest of the array
	int recMax = largest(arr, n, i + 1);

	// Compare with i-th element and return
	return max(recMax, arr[i]);
}

// Driver Code
int main()
{
	int arr[] = { 10, 324, 45, 90, 9808 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "Largest in given array is "
		<< largest(arr, n, 0);
	return 0;
}

// This Code is contributed by Rajdeep Mallick
