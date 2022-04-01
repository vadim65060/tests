#include <stdio.h>
#include <malloc.h>
#include "StringProcessing.h"

int main() {
    size_t len = 1000;
    char *str = (char *) malloc(len * sizeof(char));
    printf("str: ");
    getline(&str, &len, stdin);
    char charToFind;
    printf("char to find: ");
    scanf("%c", &charToFind);
    printf("answer: %i", FindCountWordsFormChar(str, charToFind));
    return 0;
}
