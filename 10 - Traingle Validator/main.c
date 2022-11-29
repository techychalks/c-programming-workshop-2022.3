#include <stdio.h>

int main() {

    int a,b,c;

    printf("Input size of side a: ");
    scanf("%d",&a);

    printf("Input size of side b: ");
    scanf("%d",&b);

    printf("Input size of side c: ");
    scanf("%d",&c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}
