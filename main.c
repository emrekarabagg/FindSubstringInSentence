//210201053 Emre KARABAĞ

#include <stdio.h>
#include <stdlib.h>
#include "findSubString.h"


int main() {

    char c;
    char c1;
    int inputSize = 0;
    int capacity = 5;
    char *input = malloc(capacity);
    int size = 4;
    char phrase[size];


    printf("Please enter a sentence:\n");
    while ((c = getchar()) != '\n') {
        checkAndPutChar(input, (char) c, &inputSize, &capacity);
    }
    input[inputSize] = '\0';
    printf("Please enter a search phrase:\n");
    int i = 0;
    while ((c1 = getchar()) != '\n') {
        phrase[i] = (char) c1;
        i++;
    }
    phrase[i] = '\0';
    if (isValid(phrase)) {
        searchPhrase(input, phrase);
    }

    return 0;
}

