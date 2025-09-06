#include <iostream>
#include <algorithm>  // for sort function
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2; // middle index

        if (arr[mid] == key) {
            return mid; // found the element
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }
    return -1; // element not found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // user input for array
    }

    // sort array before binary search
    sort(arr, arr + n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << " (0-based index)" << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
