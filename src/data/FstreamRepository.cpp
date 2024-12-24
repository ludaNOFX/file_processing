#include "FstreamRepository.h"
#include <fstream>
#include <stdexcept>

using namespace std;


TextEntity FstreamRepository::read(const char* filePath) const {
    ifstream file(filePath, ios::binary);
    if (!file.is_open()) {
        throw runtime_error("Unable to open file for reading");
    }

    file.seekg(0, ios::end);
    size_t size = static_cast<size_t>(file.tellg());
    file.seekg(0, ios::beg);

    char* content = new char[size + 1];
    file.read(content, size);
    if (!file) {
        delete[] content;
        file.close();
        throw runtime_error("Error reading file");
    }
    content[size] = '\0';

    file.close();
    return TextEntity(content, size);
}

void FstreamRepository::write(const char* filePath, const TextEntity& text) const {
    ofstream file(filePath, ios::binary);
    if (!file.is_open()) {
        throw runtime_error("Unable to open file for writing");
    }

    file.write(text.getContent(), text.getSize());
    if (!file) {
        file.close();
        throw runtime_error("Error writing file");
    }

    file.close();
}
