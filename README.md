# File Processing and Text Transformation Project

Этот проект демонстрирует операции ввода-вывода файлов. Программа считывает текст из одного файла и записывает его в другой файл, заменяя цифры (0-9) их словесными эквивалентами («ноль», «один», ..., «девять»). Каждое предложение начинается с новой строки. Проект также включает анализ утечек памяти.
---

## Компиляция и запуск

### 1. Простая компиляция и запуск

```bash
make
./main

### 2. Компиляция и запуск с анализом утечек памяти
 
```bash
make
valgrind --leak-check=full ./main

### 2. Компиляция в режиме Debug

```bash
/usr/bin/g++ -g -o build/Debug/outDebug src/main.cpp src/entities/TextEntity.cpp src/domain/TextProcessor.cpp src/data/FileRepository.cpp src/utils/string_utils.cpp src/utils/NumberToWordCon
verter.cpp

'''python file
press F5