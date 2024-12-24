#ifndef FSTREAM_REPOSITORY_H
#define FSTREAM_REPOSITORY_H

#include "../entities/TextEntity.h"
#include "../interfaces/repository_impl.h"
#include <fstream>

class FstreamRepository : public IRepository {
public:
    TextEntity read(const char* filePath) const override;
    void write(const char* filePath, const TextEntity& text) const override;
};

#endif // FSTREAM_REPOSITORY_H
