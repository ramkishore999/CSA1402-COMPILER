#include <stdio.h>
#include <string.h>

#define MAX_LINE 200

int main(void)
{
    char line[MAX_LINE];
    int len;

    printf("Enter a line:\n");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("No input read.\n");
        return 0;
    }
    len = (int)strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
        len--;
    }

    if (len >= 2 && line[0] == '/' && line[1] == '/') {
        printf("It is a single line comment.\n");
    } else if (len >= 4 && line[0] == '/' && line[1] == '*' &&
               line[len - 2] == '*' && line[len - 1] == '/') {
        printf("It is a multi line comment.\n");
    } else {
        printf("It is not a comment.\n");
    }

    return 0;
}
