#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

size_t str(char *string) {
    size_t largo= 0;
    while (*string != '\0')
    {
        largo++;
        string++;
    }
    return largo;
}

int main(void)
{
    printf("%zu", str("hello world"));
    return 0;
}
