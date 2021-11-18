#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int pali(char *string) {
    size_t largo= strlen(string);
    int palindromio= 1;
    for (size_t i = 0; i < largo; i++)
    {
        if (string[i] != string[(largo-1)-i]) {
            palindromio= 0;
            break;
        }
    }
    return palindromio;
}

int main(void)
{
    printf("%d\n", pali("lolo"));
    return 0;
}
