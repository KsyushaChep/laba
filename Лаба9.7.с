#include <stdio.h>
#include <limits.h>

int main() {
    int M, N;
    printf("Введите количество строк M и столбцов N: ");
    scanf("%d %d", &M, &N);

    int matrix[10][10]; 

    // Ввод матрицы
    printf("Введите элементы матрицы %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    long long min_product = LLONG_MAX; 
    int min_col_index = -1;

    for (int j = 0; j < N; j++) {
        long long product = 1;
        for (int i = 0; i < M; i++) {
            product *= matrix[i][j];
        }

        if (product < min_product) {
            min_product = product;
            min_col_index = j + 1; 
        }
    }

    printf("Номер столбца с наименьшим произведением: %d\n", min_col_index);
    printf("Наименьшее произведение: %lld\n", min_product);

    return 0;
}