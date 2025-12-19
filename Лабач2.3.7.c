#include <stdio.h>
#include <stdlib.h>

void Smooth3(double A[], int N) {
    double *B = (double*)malloc(N * sizeof(double));
    
    for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }
    
    for (int i = 0; i < N; i++) {
        if (i == 0 && N > 1) {
            A[i] = (B[i] + B[i+1]) / 2.0;
        } else if (i == N-1 && N > 1) {
            A[i] = (B[i-1] + B[i]) / 2.0;
        } else if (i > 0 && i < N-1) {
            A[i] = (B[i-1] + B[i] + B[i+1]) / 3.0;
        }
    }
    
    free(B);
}

void printArray(double A[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%.2f ", A[i]);
    }
    printf("\n");
}

int main() {
    int N;
    
    printf("Введите размер массива N: ");
    scanf("%d", &N);
    
    if (N <= 0 || N > 10) {
        printf("Размер массива должен быть от 1 до 10\n");
        return 1;
    }
    
    double *A = (double*)malloc(N * sizeof(double));
    
    printf("Введите %d элементов массива:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &A[i]);
    }
    
    printf("\nИсходный массив: ");
    printArray(A, N);
    
    for (int iteration = 1; iteration <= 5; iteration++) {
        Smooth3(A, N);
        printf("После %d-го сглаживания: ", iteration);
        printArray(A, N);
    }
    
    free(A);
    return 0;
}