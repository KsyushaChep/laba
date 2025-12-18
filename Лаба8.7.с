#include <stdio.h>

int main() {
    int N, K, L;
    
    printf("Введите размер массива N: ");
    scanf("%d", &N);
    
    if (N < 1) {
        printf("Ошибка: N должно быть >= 1\n");
        return 1;
    }
    
    int arr[N];
    
    printf("Введите элементы массива:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Введите K и L (1 < K <= L <= N): ");
    scanf("%d %d", &K, &L);
    
    if (!(1 < K && K <= L && L <= N)) {
        printf("Ошибка: неверные значения K и L\n");
        return 1;
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (i < K-1 || i > L-1) { 
            sum += arr[i];
            count++;
        }
    }
    
    if (count > 0) {
        double average = (double)sum / count;
        printf("Среднее арифметическое элементов вне [%d, %d]: %.2f\n", K, L, average);
    } else {
        printf("Нет элементов для вычисления среднего (все элементы в диапазоне).\n");
    }
    
    return 0;
}