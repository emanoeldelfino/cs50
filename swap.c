#include <stdio.h>

void old_swap(int a, int b);

void swap(int *a, int *b);

int main(void) {
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    //old_swap(x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void old_swap(int a, int b) {
    printf("a is %i, b is %i\n", a, b);

    int tmp = a;
    a = b;
    b = tmp;

    printf("a is %i, b is %i\n", a, b);
}

