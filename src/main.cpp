#include "data/CstdioRepository.h"
#include "data/FstreamRepository.h"
#include "data/dao.h"
#include "domain/TextProcessor.h"
#include "enum/RepoEnum.h"
#include "utils/ArgumentParser.h"
#include "data/RepoFactory.h"
#include <iostream>
#include <fstream>


using namespace std;


int main(int argc, char* argv[]) {
    try {
        const char* inputFilePath = "input.txt";
        const char* outputFilePath = "output.txt";

        // Парсим аргументы командной строки
        RepositoryType repoType = parseArguments(argc, argv);

        // Явное указание типа репозитория
        unique_ptr<IRepository> repo = gen_repo(repoType);

        // Создаем DAO с выбранным репозиторием
        DAO dao(*repo);

        // Загружаем, обрабатываем и сохраняем данные
        TextEntity inputText = dao.get(inputFilePath);
        TextEntity processedText = TextProcessorUsecase::process(inputText);
        dao.save(outputFilePath, processedText);

        cout << "Processing completed. Output written to " << outputFilePath << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

