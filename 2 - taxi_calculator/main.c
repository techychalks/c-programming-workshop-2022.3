#include <stdio.h>

int main() {

    float charge_per_kilometer = 120.00;
    float travelled_distance = 0;

    printf("Input travelled distance: ");
    scanf("%f",&travelled_distance);

    float total_amount =
            travelled_distance * charge_per_kilometer;

    printf("Total amount: %0.2f",total_amount);
    return 0;
}
