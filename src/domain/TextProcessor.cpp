#include "TextProcessor.h"
#include "../utils/NumberToWordConverter.h"
#include <cctype>
#include "../utils/string_utils.h"


TextEntity TextProcessorUsecase::process(const TextEntity& textInput) {
    int size = textInput.getSize();
    const char* content = textInput.getContent();

    char* processedContent = new char[size * 5];
    int index = 0;
    bool newSentence = true;

    for (int i = 0; i < size; ++i) {
        char c = content[i];
        if (newSentence && !std::isspace(c)) {
            processedContent[index++] = '\n';
            newSentence = false;
        }

        processedContent[index++] = c;

        if (c == '.' || c == '!' || c == '?') {
            newSentence = true;
        }
    }

    processedContent[index] = '\0';
    char* replacedContent = replaceNumbersWithWords(processedContent, index);
    delete[] processedContent;

    int newSize = my_strlen(replacedContent);
    return TextEntity(replacedContent, newSize);
}
