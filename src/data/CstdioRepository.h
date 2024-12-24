#ifndef CSTDIO_REPOSITORY_H // Защита от повторного включения
#define CSTDIO_REPOSITORY_H

#include "../entities/TextEntity.h"
#include "../interfaces/repository_impl.h"


class CstdioRepository : public IRepository {
public:
    TextEntity read(const char* filePath) const override;
    void write(const char* filePath, const TextEntity& text) const override;
};


#endif // CSTDIO_REPOSITORY_H