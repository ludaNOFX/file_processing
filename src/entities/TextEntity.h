#ifndef TEXT_ENTITY_H // Защита от повторного включения
#define TEXT_ENTITY_H


class TextEntity {
public:
    // Конструктор
    TextEntity(char* content, int size);
    // Деструктор
    ~TextEntity();
    // Метод который возвраащает контент
    const char* getContent() const;
    // Метод который возвращает размер контента
    int getSize() const;

private:
    char* content;
    int size;
};

#endif // TEXT_ENTITY_H