#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char *str;

void char_compare();

void str_compare();

int main(void) {
    str_compare();
}

void char_compare() {
    char c1 = 'a';
    char c2 = 'a';

    printf("c1: %p\n", &c1);
    printf("c2: %p\n", &c2);
    printf("c1 and c2 are %s.\n", c1 == c2 ? "the same" : "different");
}

void str_compare() {
    char s[] = {'a', 'b', '\0'};
    char t[] = {'a', 'b', '\0'};

    printf("%p -> %s\n", s, s);
    printf("%p -> %s\n", t, t);

    //printf("%s\n", s == t ? "same" : "different");
    //printf("%s\n", strcmp(s, t) == 0 ? "same" : "different");

    //char *str1 = malloc(sizeof(char) * 10);
    //char *str2 = malloc(sizeof(char) * 10);
    //char str1[10];
    //char str2[10];

    //printf("String 1: ");
    //scanf("%s", str1);
    //printf("String 2: ");
    //scanf("%s", str2);

    //printf("str1: %p\n", str1);
    //printf("str2: %p\n", str2);

    //printf("Strings are %s.\n", str1 == str2 ? "the same" : "different");

    //printf("Strings are %s.\n", strcmp(str1, str2) == 0 ? "the same" : "different");

    //free(str1);
    //free(str2);
}

