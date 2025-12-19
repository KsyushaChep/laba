#include <stdio.h>

float Calc(float A, float B, int Op) {
    switch (Op) {
        case 1: return A - B; 
        case 2: return A * B; 
        case 3: return A / B; 
        default: return A + B; 
    }
}

int main() {
    float A, B;
    int N1, N2, N3;
    
    printf("Введите A и B (вещественные числа): ");
    scanf("%f %f", &A, &B);
    printf("Введите N1, N2, N3 (целые числа): ");
    scanf("%d %d %d", &N1, &N2, &N3);
    
    printf("Результат для N1 (%d): %.2f\n", N1, Calc(A, B, N1));
    printf("Результат для N2 (%d): %.2f\n", N2, Calc(A, B, N2));
    printf("Результат для N3 (%d): %.2f\n", N3, Calc(A, B, N3));
    
    return 0;
}