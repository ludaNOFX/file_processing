#ifndef REPOSITORY_INTERFACE_H
#define REPOSITORY_INTERFACE_H

#include "../entities/TextEntity.h"

class IRepository {
public:
    virtual ~IRepository() = default;

    // Чтение данных из файла
    virtual TextEntity read(const char* filePath) const = 0;

    // Запись данных в файл
    virtual void write(const char* filePath, const TextEntity& text) const = 0;
};

#endif // REPOSITORY_INTERFACE_H