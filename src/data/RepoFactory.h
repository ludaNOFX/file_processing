#ifndef REPOFACTORY_H
#define REPOFACTORY_H

#include "../enum/RepoEnum.h"
#include "FstreamRepository.h"
#include "CstdioRepository.h"
#include <memory>

std::unique_ptr<IRepository> gen_repo(RepositoryType repoType);

#endif // REPOFACTORY_H
