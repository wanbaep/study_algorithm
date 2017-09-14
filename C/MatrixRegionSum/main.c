#include <stdio.h>

#define INFINITE -99

void initialize_to_infinite(int arr[][10]);
int NormalMatrixRegionSum(int start, int end, int input[][10]);
int MatrixRegionSum(int start, int end, int input[][10], int memory[][10]);

int main() {
    int input[10][10] = {
            {70, 37, 23, 57, 27, 22, 90, 99, 22, 59},
            {47, 63, 33, 1,  42, 46, 6,  70, 98, 93},
            {36, 62, 50, 21, 92, 27, 60, 29, 15, 34},
            {53, 3,  88, 45, 57, 39, 83, 81, 79, 56},
            {28, 63, 89, 20, 47, 15, 84, 18, 82, 33},
            {26, 87, 11, 76, 79, 5,  94, 55, 73, 51},
            {17, 82, 86, 10, 96, 5,  42, 43, 51, 6},
            {44, 76, 51, 4,  15, 99, 52, 11, 70, 89},
            {66, 36, 92, 85, 50, 21, 72, 27, 52, 65},
            {60, 0,  67, 37, 59, 14, 33, 13, 36, 36}
    };
    int memory[10][10] = {0,};
    int start = 3;
    int end = 7;
    int A[2] = {3, 3};
    int B[2] = {3, 7};
    int C[2] = {7, 3};
    int D[2] = {7, 7};
    int result = 0;
    int i, j;



    initialize_to_infinite(memory);

    printf("Input \n============\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }
    printf("============\n");

    printf("Memory \n============\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", memory[i][j]);
        }
        printf("\n");
    }
    printf("============\n");

    printf("Case1 Normal \n============\n");
    result = NormalMatrixRegionSum(start, end, input);
    printf("result : %d\n", result);
    printf("============\n");

    printf("Case1 Dynamic \n============\n");
    result = MatrixRegionSum(start, end, input, memory);
    printf("result : %d\n", result);
    printf("============\n");

    printf("Case1 \n============\n");
    result = MatrixRegionSum(1, 2, input, memory);
    printf("result : %d\n", result);
    printf("============\n");

    return 0;
}

int MatrixRegionSum(int start, int end, int input[][10], int memory[][10]) {
    int result = 0;
    int i;
    int j;
    int sum_A, sum_B, sum_C, sum_D;
    printf("start: %d, end: %d\n", start, end);

    //sum_A, sum_B, sum_C, sum_D

    //sum_A
    if (memory[start][start] != INFINITE) {
        sum_A = memory[start][start];
    } else {
        memory[start][start] = MatrixSum(start, start, input);
        sum_A = memory[start][start];
    }



    for (i = start; i < end; i++) {
        for (j = start; j < end; j++) {
            result += input[i][j];
        }
    }
    return result;
}

int MatrixSum(int col, int row, int arr[][10]) {
    int i, j;
    int sum = 0;

    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void initialize_to_infinite(int arr[][10]) {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            arr[i][j] = INFINITE;
        }
    }
}

int NormalMatrixRegionSum(int start, int end, int input[][10]) {
    int result = 0;
    int i;
    int j;
    printf("start: %d, end: %d\n", start, end);

    for (i = start; i < end; i++) {
        for (j = start; j < end; j++) {
            result += input[i][j];
        }
    }
    return result;
}