#include "ArgumentParser.h"
#include <iostream>
#include <cstring>
#include <stdexcept>


RepositoryType parseArguments(int argc, char* argv[]) {
    // Проверка, был ли передан параметр для выбора репозитория
    if (argc < 2) {
        throw std::invalid_argument("Error: Please specify repository type (fstream or cstdio).");
    }

    // Парсим аргумент командной строки для выбора репозитория
    if (strcmp(argv[1], "fstream") == 0) {
        return RepositoryType::FSTREAM;
    } else if (strcmp(argv[1], "cstdio") == 0) {
        return RepositoryType::CSTDIO;
    } else {
        throw std::invalid_argument("Error: Invalid repository type. Use 'fstream' or 'cstdio'.");
    }
}
