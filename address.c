#include <stdio.h>

int main(void) {
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    int i;

    for (i = 0; i < 7; i++) {
        printf("%p -> %i\n", (numbers + i), *(numbers + i));
    }
}

