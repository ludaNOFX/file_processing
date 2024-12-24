#ifndef DAO_H
#define DAO_H

#include "../interfaces/repository_impl.h"
#include "../interfaces/dao_impl.h"

class DAO : public IDAO {
private:
    const IRepository& repo; // Репозиторий используемый dao

public:

    explicit DAO(const IRepository& repo);

    TextEntity get(const char* filePath) const override;
    void save(const char* filePath, const TextEntity& text) const override;
};

#endif // DAO_H