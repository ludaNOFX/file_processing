#include "dao.h"

DAO::DAO(const IRepository& repo) : repo(repo) {}

TextEntity DAO::get(const char* filePath) const {
    return repo.read(filePath);
}

void DAO::save(const char* filePath, const TextEntity& text) const {
    repo.write(filePath, text);
}
