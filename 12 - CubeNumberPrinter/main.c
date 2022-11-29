#include <stdio.h>
#include <math.h>

int main() {

    int i = 1;
    int number;

    printf("Input a number: ");
    scanf("%d",&number);

    while (i < number)
    {
        printf("%d\n",(int)pow(i,3));
        i++;
    }


    return 0;
}
