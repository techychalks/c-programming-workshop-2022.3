#include <stdio.h>

int main() {
    int number;

    printf("Input a number: ");
    scanf("%d",&number);

    if(number % 3 == 0 && number % 5 == 0)
    {
        printf("FizzBuzz");
    }
    else if(number % 3 == 0)
    {
        printf("Fizz");
    }
    else if(number % 5 == 0)
    {
        printf("Buzz");
    }
    else
    {
        printf("Your Input: %d",number);
    }
    return 0;
}
