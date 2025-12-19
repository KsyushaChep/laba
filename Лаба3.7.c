#include <stdio.h>

int main() {
    int A, B, C;
    int result;

    printf("Введите три целых числа A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    result = ((A < B) && (B < C)) || ((A > B) && (B > C));

    printf("Результат: %s\n", result ? "TRUE" : "FALSE");

    return 0;
}