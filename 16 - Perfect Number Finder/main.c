#include <stdio.h>

int main() {

    int number;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d",&number);

    for(int i = 1; i <= number/2; i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }

   if(number == sum)
   {
       printf("%d is a perfect number",number);
   } else
   {
       printf("%d is not a perfect number",number);
   }

    return 0;
}
