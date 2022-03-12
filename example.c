#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;

    // Address of y is unkown (garbage value) because we didn't set it
    *y = 13; 

    y = x;

    *y = 13;
}

