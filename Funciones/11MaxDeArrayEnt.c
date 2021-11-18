#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int maximo(int *array, size_t largo) {
    long long int max= INT_MIN;
    for (size_t i = 0; i < largo; i++)
    {
        if (*array > max)
        {
            max= *array;
        }
        array++;
    }
    return max;
}

int main(void)
{
    int array[]= {1, 2, 3, 4, 2};
    printf("%d\n", maximo(array, 5));
    return 0;
}
