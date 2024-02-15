/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Write a program to find sum of all elements of an array;
 write a program to find maximum of elements of an array;
  write a program for linear search of an array.
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int maxOfArray(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 7, 2, 1, 9, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of all elements: " << sumOfArray(arr, size) << endl;
    cout << "Maximum element: " << maxOfArray(arr, size) << endl;

    int key = 5;
    int index = linearSearch(arr, size, key);
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
