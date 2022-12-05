#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0;
    srand(time(NULL));
    while (i < 10)
    {
        printf("%d\n",rand()%100);
        i++;
    }
    return 0;
}
