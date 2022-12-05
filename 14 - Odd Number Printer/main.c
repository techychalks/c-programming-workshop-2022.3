#include <stdio.h>

int main() {

    int i = 1;
    //Method - 1
    while (i < 100)
    {
        //i % 2 == 1
        if(i % 2 != 0)
        {
            printf("%d\n",i);
        }

        i++;
    }

    //Method 2
    while (i < 100)
    {
        printf("%d\n",i);
        //i = i +2;
        i += 2;
    }

    return 0;
}
