//
// Created by vadim on 01.04.2022.
//

#include <stddef.h>
#include "StringProcessing.h"

size_t FindCountWordsFormChar(char *str, char charToFind) {
    size_t count = 0;
    int isNotAdded = 1;
    for (char *i = str; *i != '\0'; ++i) {
        if (*i == ' ')
            isNotAdded = 1;
        else if (*i == charToFind && isNotAdded) {
            isNotAdded = 0;
            ++count;
        }
    }
    return count;
}