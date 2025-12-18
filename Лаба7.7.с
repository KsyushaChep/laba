#include <stdio.h>

int main() {
    int N, K = 1;

    printf("Введите целое положительное число N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Ошибка: N должно быть положительным.\n");
        return 1;
    }

    while (K * K <= N) {
        K++;
    }

    printf("Наименьшее целое K, такое что K^2 > N: %d\n", K);

    return 0;
}