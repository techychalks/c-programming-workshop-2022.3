#include <stdio.h>

int main() {

    int num = 0;
    int sum = 0;
    int count = 0;
    while (num >= 0)
    {
        sum = sum + num;
        count ++;
        printf("Input a number :");
        scanf("%d",&num);

    }
    printf("Sum :  %d\n",sum);
    printf("Average : %f",(float)sum / (count -1));
    return 0;
}
