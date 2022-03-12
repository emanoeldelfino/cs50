#include <stdio.h>
#include <string.h>

int str_len(char str[]) {
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

int main(int argc, char *argv[]) {
    char str1[] = "ab";

    printf("%zu\n", strlen(str1));
    printf("%d\n", str_len(str1));
}

