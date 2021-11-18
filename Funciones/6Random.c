#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int a, int b) {
    srand(time(NULL));
    return ((rand() % (b - a + 1)) + a);
}

int main(void)
{
    printf("%d\n", random(1, 3));
    return 0;
}
