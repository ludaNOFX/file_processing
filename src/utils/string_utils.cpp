#include "string_utils.h"


// Функция определения длины строки
int my_strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Функция копирования строки
void my_strcp(char* dest, const char* src) {
    while ((*dest++ = *src++) != '\0'); // (dest - куда) (src - откуда)
}