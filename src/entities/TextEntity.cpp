#include "TextEntity.h"

TextEntity::TextEntity(char* content, int size) : content(content), size(size) {} // запись через инициализирующий список


// Альтернативный способ иницилизации объекта
// TextEntity::TextEntity(char* content, int size) {
//     this->content = content;
//     this->size = size;
// }

TextEntity::~TextEntity() {
    delete[] content;
}

const char* TextEntity::getContent() const {
    return content;
}

int TextEntity::getSize() const {
    return size;
}



