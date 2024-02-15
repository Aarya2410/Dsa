/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Shifts the contents of array cells one cell to the right
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

void shiftArrayRight(int arr[], int size) {
    if (size <= 1) return;
    int lastElement = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shiftArrayRight(arr, size);

    cout << "Shifted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
