#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fileName[256];
    char S[256];
    char *buffer = NULL;
    long size = 0;

    printf("Введите имя файла: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0'; 

    printf("Введите строку S: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0'; 

    FILE *file = fopen(fileName, "rb");
    if (file != NULL) {
        
        fseek(file, 0, SEEK_END);
        size = ftell(file);
        fseek(file, 0, SEEK_SET);

        buffer = (char*)malloc(size);
        if (buffer == NULL) {
            printf("Ошибка выделения памяти.\n");
            fclose(file);
            return 1;
        }
        fread(buffer, 1, size, file);
        fclose(file);
    }

    file = fopen(fileName, "wb");
    if (file == NULL) {
        printf("Ошибка открытия файла для записи.\n");
        free(buffer);
        return 1;
    }

    fwrite(S, 1, strlen(S), file);

    if (size > 0) {
        fputc('\n', file);
    }

    if (size > 0) {
        fwrite(buffer, 1, size, file);
    }

    fclose(file);
    free(buffer);

    printf("Строка успешно добавлена в начало файла.\n");
    return 0;
}