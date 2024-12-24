# File Processing and Text Transformation Project

Этот проект демонстрирует операции ввода-вывода файлов. Программа считывает текст из одного файла и записывает его в другой файл, заменяя цифры (0-9) их словесными эквивалентами («ноль», «один», ..., «девять»). Каждое предложение начинается с новой строки. Проект также включает анализ утечек памяти.
---

## Компиляция и запуск

### 1. Простая компиляция и запуск

```bash
make
./main fstream or cstdio

### 2. Компиляция и запуск с анализом утечек памяти
 
```bash
make
valgrind --leak-check=full ./main [fstream or cstdio]

### 2. Компиляция в режиме Debug

```bash
/usr/bin/g++ -g -o build/Debug/outDebug src/main.cpp src/data/CstdioRepository.cpp src/data/dao.cpp src/data/FstreamRepository.cpp src/data/RepoFactory.cpp src/domain/TextProcessor.cpp src/entities/TextEntity.cpp src/utils/ArgumentParser.cpp src/utils/NumberToWordConverter.cpp src/utils/string_utils.cpp  

'''file
press F5
