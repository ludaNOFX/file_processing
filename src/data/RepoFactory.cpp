#include "RepoFactory.h"
#include <stdexcept>

std::unique_ptr<IRepository> gen_repo(RepositoryType repoType) {
    switch (repoType) {
        case RepositoryType::FSTREAM:
            return std::make_unique<FstreamRepository>();
        case RepositoryType::CSTDIO:
            return std::make_unique<CstdioRepository>();
        default:
            throw std::invalid_argument("Unknown repository type.");
    }
}
