#include <stdio.h>

int main() {

    float num_of_minutes, monthly_rental,
    tax_amount, final_bill_amount;

    printf("Input no of minutes: ");
    scanf("%d",&num_of_minutes);

    monthly_rental = num_of_minutes * 0.2;
    tax_amount = monthly_rental * 0.13;
    final_bill_amount = monthly_rental + tax_amount;

    printf("Monthly rental :  %f\n", monthly_rental);
    printf("Tax amount: %f\n", tax_amount);
    printf("Final bill amount: %f",final_bill_amount);

    return 0;
}
