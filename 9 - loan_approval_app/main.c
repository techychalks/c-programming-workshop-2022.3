#include <stdio.h>

int main() {
    int age;
    float monthly_income;
    printf("How old are you? ");
    scanf("%d",&age);

    printf("Input your monthly income: ");
    scanf("%f",&monthly_income);

    if(age >= 18 && monthly_income >= 50000)
    {
        printf("You are eligible for apply to a loan");
    } else
    {
        printf("You are not eligible for apply to a loan");
    }
    return 0;
}
