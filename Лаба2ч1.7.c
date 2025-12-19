#include <stdio.h>

void InvertDigits(int *K) {
    int reversed = 0;
    int original = *K;
    
    while (original > 0) {
        int digit = original % 10;
        reversed = reversed * 10 + digit;
        original = original / 10;
    }
    
    *K = reversed;
}

int main() {
    int numbers[5];
    
    printf("Введите 5 целых положительных чисел:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        InvertDigits(&numbers[i]);
        printf("Инвертированное число %d: %d\n", i + 1, numbers[i]);
    }
    
    return 0;
}