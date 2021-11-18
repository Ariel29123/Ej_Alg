#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

void printar(int array[], size_t size) {
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[]= {1, 2, 3, 4};
    printar(array, 4);
    return 0;
}
