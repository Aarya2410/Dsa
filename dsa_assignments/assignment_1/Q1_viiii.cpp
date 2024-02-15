/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Examines an array of integers and eliminates all 
duplication of values. The distinct integers are 
all moved to the left part of the array.
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
#include <unordered_set>

using namespace std;

void eliminateDuplicates(int arr[], int& size) {
    unordered_set<int> seen;
    int writeIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[writeIndex++] = arr[i];
        }
    }

    size = writeIndex;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    eliminateDuplicates(arr, size);

    cout << "Array after eliminating duplicates: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
