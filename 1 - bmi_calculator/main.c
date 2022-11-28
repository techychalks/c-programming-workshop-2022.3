#include <stdio.h>
#include <math.h>

int main() {
    float weight, height;
    printf("Input your weight : ");
    scanf("%f",&weight);

    printf("Input your height : ");
    scanf("%f",&height);

    float BMI = weight / pow(height,2);

    printf("BMI : %0.2f",BMI);
}
