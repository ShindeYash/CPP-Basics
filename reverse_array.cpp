#include <iostream>
using namespace std;

void reverse(int array[], int n) {
    int temp[n];
    int flag = 0; // Add a semicolon to terminate the statement

    for (int i = n - 1; i >= 0; i--) {
        temp[flag] = array[i];
        flag++;
    }

    // Copy the reversed array back to the original array
    for (int i = 0; i < n; i++) {
        array[i] = temp[i];
    }
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int array[n];
    cout << "Please Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    reverse(array, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0; // Add a return statement
}
