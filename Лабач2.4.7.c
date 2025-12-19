#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* InvertStr(const char* S, int K, int N) {
    int len = strlen(S);
    
    if (K > len) {
        char* result = (char*)malloc(1);
        result[0] = '\0';
        return result;
    }
    
    int start = K - 1;  
    int actualN = N;
    
    if (start + N > len) {
        actualN = len - start;
    }
    
    char* result = (char*)malloc(actualN + 1);
    
    for (int i = 0; i < actualN; i++) {
        result[i] = S[start + actualN - 1 - i];
    }
    result[actualN] = '\0';
    
    return result;
}

int main() {
    char S[1000];
    int K1, N1, K2, N2, K3, N3;
    
    printf("Введите строку S: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';  
    
    printf("Введите K1 и N1: ");
    scanf("%d %d", &K1, &N1);
    
    printf("Введите K2 и N2: ");
    scanf("%d %d", &K2, &N2);
    
    printf("Введите K3 и N3: ");
    scanf("%d %d", &K3, &N3);
    
    char* result1 = InvertStr(S, K1, N1);
    char* result2 = InvertStr(S, K2, N2);
    char* result3 = InvertStr(S, K3, N3);
    
    printf("Результаты:\n");
    printf("1. InvertStr(S, %d, %d) = \"%s\"\n", K1, N1, result1);
    printf("2. InvertStr(S, %d, %d) = \"%s\"\n", K2, N2, result2);
    printf("3. InvertStr(S, %d, %d) = \"%s\"\n", K3, N3, result3);
    
    free(result1);
    free(result2);
    free(result3);
    
    return 0;
}