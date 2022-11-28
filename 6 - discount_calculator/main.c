#include <stdio.h>

int main() {

    float sub_total, discount_amount, final_bill_amount;

    printf("Input sub total : ");
    scanf("%f",&sub_total);

    if (sub_total >= 5000)
    {
       discount_amount = sub_total * 0.2;
       final_bill_amount = sub_total - discount_amount;
    }
    else if (sub_total >= 3000)
    {
        discount_amount = sub_total * 0.15;
        final_bill_amount = sub_total - discount_amount;
    }
    else
    {
        discount_amount = sub_total * 0.13;
        final_bill_amount = sub_total - discount_amount;
    }
    printf("Sub total : %0.2f\n",sub_total);
    printf("Discount amount : %0.2f\n",discount_amount);
    printf("Final bill amount : %0.2f",final_bill_amount);


    return 0;
}
