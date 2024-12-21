#include "NumberToWordConverter.h"
#include "string_utils.h"

const char* numberWords[] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};

char* replaceNumbersWithWords(const char* text, int size) {
    char* result = new char[size * 5];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            const char* word = numberWords[text[i] - '0'];
            my_strcp(result + index, word);
            index += my_strlen(word);
        } else {
            result[index++] = text[i];
        }
    }

    result[index] = '\0';
    return result;
}