#include <stdio.h>

int main() {

    int number = 0;
    int flag = 0;
    printf("Input a number : ");
    scanf("%d",&number);

    for(int i = 2; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("%d is a prime number",number);
    }
    else
    {
        printf("%d is not a prime number",number);
    }

    return 0;
}
