//merge_sort
//Divide array into halves, sort each half, and merge them.
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Merge Sort Implementation
    // Creating two temporary arrays
    int arr1[n / 2], arr2[n - n / 2];

    // Splitting the array into two halves
    for (int i = 0; i < n / 2; i++) {
        arr1[i] = arr[i];
    }
    for (int i = n / 2; i < n; i++) {
        arr2[i - n / 2] = arr[i];
    }

    // Sorting each half using Merge Sort (Recursive approach)
    int i = 0, j = 0, k = 0;
    while (i < n / 2 && j < (n - n / 2)) {
        if (arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from arr1
    while (i < n / 2) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy any remaining elements from arr2
    while (j < (n - n / 2)) {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}