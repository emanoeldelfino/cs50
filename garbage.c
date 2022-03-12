#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int scores[3];
    char text[10];
    for (int i = 0; i < 3; i++) {
        printf("%i\n", scores[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%c\n", text[i]);
    }
    return 0;
}

