#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char characters[] = "0123456789abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX!@#$^&*?";
    int arrSize = sizeof (characters) / sizeof (characters[0]);

    srand(time(NULL));

    int passwordLength;

    printf("Input password length : ");
    scanf("%d",&passwordLength);

    char password[passwordLength];

    for(int i = 0; i < passwordLength; i++)
    {
        password[i] = characters[rand() % arrSize];
    }

    printf("%s",password);

    return 0;
}
