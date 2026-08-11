#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SRC 2000
#define MAX_TOK 64

const char *keywords[] = {
    "auto","break","case","char","const","continue","default","do",
    "double","else","enum","extern","float","for","goto","if","int",
    "long","register","return","short","signed","sizeof","static",
    "struct","switch","typedef","union","unsigned","void","volatile",
    "while","main","printf","scanf"
};
#define NUM_KEYWORDS (int)(sizeof(keywords) / sizeof(keywords[0]))

int isKeyword(const char *buf)
{
    int i;
    for (i = 0; i < NUM_KEYWORDS; i++) {
        if (strcmp(keywords[i], buf) == 0) return 1;
    }
    return 0;
}
