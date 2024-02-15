/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Copies numbers from two arrays into a third array
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

const int SIZE = 10;
void copyArrays(int arr1[], int arr2[], int result[]) {
    for (int i = 0; i < SIZE; ++i) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < SIZE; ++i) {
        result[SIZE + i] = arr2[i];
    }
}

void printArray(int arr[]) {
    for (int i = 0; i < 2 * SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[SIZE] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int result[2 * SIZE];

    copyArrays(arr1, arr2, result);

    cout << "Merged Array: ";
    printArray(result);

    return 0;
}
