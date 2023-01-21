#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randChar() {
    srand(time(NULL));
    int asciiStart = 65, asciiEnd = 90;
    for(int countLetter = 1; countLetter <= 7; countLetter++) {
        int getRandom = rand() % ((asciiEnd + 1) - asciiStart) + asciiStart;
        char getLetter = getRandom;
        printf("%c", getLetter);
    }
}

int main(){
    randChar();
    return 0;
}
