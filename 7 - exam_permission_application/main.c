#include <stdio.h>

int main() {

    int num_of_classes_held,num_of_classes_attended;

    printf("Input num of classes held: ");
    scanf("%d",&num_of_classes_held);

    printf("Input num of classes attended: ");
    scanf("%d",&num_of_classes_attended);

    float attendance =
            ((float)num_of_classes_attended / num_of_classes_held ) * 100;

    printf("attendance : %f\n",attendance);
    if (attendance >= 75)
    {
        printf("You can sit for the exam");
    }
    else
    {
        printf("You cannot sit for the exam");
    }


    return 0;
}
