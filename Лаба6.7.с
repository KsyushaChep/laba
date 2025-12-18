#include <stdio.h>

int main() {
    int N, i;
    double sum = 0.0;
    
    printf("Введите целое число N (> 0): ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Ошибка: N должно быть больше 0\n");
        return 1;
    }
    
    for (i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    
    printf("Сумма ряда 1 + 1/2 + ... + 1/%d = %.6f\n", N, sum);
    
    return 0;
}