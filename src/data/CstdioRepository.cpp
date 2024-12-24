#include "CstdioRepository.h"
#include <cstdio>
#include <stdexcept>
#include "../utils/string_utils.h"

using namespace std;

TextEntity CstdioRepository::read(const char* filePath) const {
    FILE* file = fopen(filePath, "r");
    fseek(file, 0, SEEK_END);
    size_t size = static_cast<size_t>(ftell(file));  // Используем size_t для переменной size
    rewind(file);

    char* content = new char[size + 1];
    if (fread(content, 1, size, file) != size) {
        delete[] content;
        fclose(file);
        throw runtime_error("Error reading file");
    }
    content[size] = '\0';

    fclose(file);
    return TextEntity(content, size);
}

void CstdioRepository::write(const char* filePath, const TextEntity& text) const {
    FILE* file = fopen(filePath, "w");
    if (!file) {
        throw runtime_error("Unable to open file for writing");
    }

    if (fwrite(text.getContent(), 1, text.getSize(), file) != static_cast<size_t>(text.getSize())) {
        fclose(file);
        throw runtime_error("Error writing file");
    }

    fclose(file);
}
