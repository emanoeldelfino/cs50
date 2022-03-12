#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_int(char msg[]);

char * get_str(char msg[]);

int main(int argc, char *argv[]) {
    char *s = get_str("s: ");
    //char *t = s;
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
        return 1;
    strcpy(t, s);
    //for (int i = 0, n = strlen(s); i < n; i++) {
    //    t[i] = s[i];
    //}
    if (strlen(t) > 0)
        t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    free(s);

    return 0;
}

char * get_str(char msg[]) {
    char str[256];
    printf("%s", msg);
    scanf("%s", str);
    char *s = malloc(sizeof(char) * 256);
    strcpy(s, str);
    return s;
}

int get_int(char msg[]) {
    int n;
    printf("%s", msg);
    scanf("%d", &n);
    return n;
}

