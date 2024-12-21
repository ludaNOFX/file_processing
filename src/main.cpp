#include "data/FileRepository.h"
#include "domain/TextProcessor.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    try {
        const char* inputFilePath = "input.txt";
        const char* outputFilePath = "output.txt";

        FileRepository fileRepo;
        TextEntity inputText = fileRepo.read(inputFilePath);
        TextEntity processedText = TextProcessorUsecase::process(inputText);
        fileRepo.write(outputFilePath, processedText);

        cout << "Processing completed. Output written to " << outputFilePath << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
