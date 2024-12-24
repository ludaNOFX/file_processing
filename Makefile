# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Список файлов проекта
SRC_DIR = src

SRC_FILES = \
    $(SRC_DIR)/main.cpp \
    $(SRC_DIR)/data/CstdioRepository.cpp \
    $(SRC_DIR)/data/dao.cpp \
    $(SRC_DIR)/data/FstreamRepository.cpp \
    $(SRC_DIR)/data/RepoFactory.cpp \
    $(SRC_DIR)/domain/TextProcessor.cpp \
    $(SRC_DIR)/entities/TextEntity.cpp \
	$(SRC_DIR)/utils/ArgumentParser.cpp \
	$(SRC_DIR)/utils/NumberToWordConverter.cpp \
    $(SRC_DIR)/utils/string_utils.cpp 


# Целевой исполняемый файл
TARGET = main

# Правило сборки
all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Очистка
clean:
	rm -f $(TARGET)