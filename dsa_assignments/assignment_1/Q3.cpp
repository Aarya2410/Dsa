/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: program for adding and subtracting Matrices using 2D Arrays
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void printMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int resultAddition[ROWS][COLS], resultSubtraction[ROWS][COLS];

    addMatrices(matrix1, matrix2, resultAddition);
    subtractMatrices(matrix1, matrix2, resultSubtraction);

    cout << "Matrix Addition:" << endl;
    printMatrix(resultAddition);

    cout << "\nMatrix Subtraction:" << endl;
    printMatrix(resultSubtraction);

    return 0;
}
