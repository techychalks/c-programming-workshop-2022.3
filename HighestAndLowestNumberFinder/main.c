#include <stdio.h>

int main() {

    int numbers[] = { 34, 56, 66, 31, 89 };

    int min = numbers[0];
    int max = numbers[0];

    int arrSize = sizeof (numbers) / sizeof (numbers[0]);
    for(int i = 1; i < arrSize; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
        else if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("Max number %d\n", max);
    printf("Min number %d\n", min);

    return 0;
}
