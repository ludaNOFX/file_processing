#ifndef IDAO_H
#define IDAO_H

#include "../entities/TextEntity.h"
#include "repository_impl.h"

class IDAO {
public:
    virtual ~IDAO() = default;

    // Получение данных из хранилища
    virtual TextEntity get(const char* filePath) const = 0;

    // Сохранение данных в хранилище
    virtual void save(const char* filePath, const TextEntity& text) const = 0;
};

#endif // IDAO_H