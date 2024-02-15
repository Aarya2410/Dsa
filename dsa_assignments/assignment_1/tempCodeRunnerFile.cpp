/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Write a program to Multiply Matrices of 10X10.
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

void multiplyMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix1[i][j] = i * COLS + j + 1;
            matrix2[i][j] = j * ROWS + i + 1;
        }
    }

    multiplyMatrices(matrix1, matrix2, result);

    printMatrix(result);

    return 0;
}
