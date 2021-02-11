#include <stdio.h>
#include <stdlib.h>
#include "findSubString.h"

void checkAndPutChar(char *input, char c, int *inputSize, int *capacity) {

    if (sizeString(input) >= *capacity) {
        realloc(input, sizeof(input) / sizeof(char) * 2);
        *capacity = *capacity * 2;
    }
    input[*inputSize] = c;
    *inputSize = *inputSize + 1;

}

int isValid(char *phrase) {


    if (sizeString(phrase) > 3) {
        printf("\"%s\" is invalid for the given string.\n", phrase);
        return 0;
    }
    return 1;

}

int sizeString(char *phrase) {
    int size = 0;
    while (phrase[size] != '\0') {
        size++;
    }
    return size;

}

void searchPhrase(char *input, char *phrase) {

    int i = 0, j = 0;
    int sizePhrase = sizeString(phrase);
    int sizeInput = sizeString(input);
    while ((input[j] != '\0') || (phrase[i] != '\0')) {
        if (i == sizePhrase) {
            printf("\"%s\" exists in the given string.\n", phrase);
            break;
        } else if (phrase[i] == input[j]) {
            j++;
            i++;
        } else {
            if (j == sizeInput) {
                break;
            }
            i = 0;
            j++;
        }
    }
    if (i == 0) {
        printf("\"%s\" doesn't exist in the given string.\n", phrase);
    }

}