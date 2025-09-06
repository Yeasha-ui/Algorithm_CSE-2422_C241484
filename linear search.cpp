#include <iostream>
using namespace std;

int main() {
    int n, target;

    // Asking user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // creating array of size n

    // Taking input for array elements
    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Asking the user for the element to search
    cout << "Enter the element to search: ";
    cin >> target;

    bool found = false;
    int position = -1;

    // Linear search algorithm
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            position = i + 1; // Position in 1-based indexing
            break; // Stop after finding the element
        }
    }

    // Output the result
    if(found) {
        cout << "Element " << target << " found at position " << position << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
