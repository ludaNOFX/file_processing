#ifndef FILE_REPOSITORY_H // Защита от повторного включения
#define FILE_REPOSITORY_H

#include "../entities/TextEntity.h"


class FileRepository {
public:
    TextEntity read(const char* filePath) const;
    void write(const char* filePath, const TextEntity& text) const;
};

#endif // FILE_REPOSITORY_H