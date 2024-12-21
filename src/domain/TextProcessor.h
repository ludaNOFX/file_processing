#ifndef TEXT_PROCESSOR_H // Защита от повторного включения
#define TEXT_PROCESSOR_H

#include "../entities/TextEntity.h"


class TextProcessorUsecase {
public:
    static TextEntity process(const TextEntity& textInput);
};

#endif // TEXT_PROCESSOR_H