#include <stdio.h>

int main() {

    float bill_amount;
    int no_of_persons;

    printf("Input bill amount: ");
    scanf("%f",&bill_amount);

    printf("Input no of persons: ");
    scanf("%d",&no_of_persons);

    float total_amount_per_person =
            bill_amount / no_of_persons;

    printf("Total amount per person: %0.2f",
           total_amount_per_person);

    return 0;
}
