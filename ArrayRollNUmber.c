#include <stdio.h>

int main()
{
    int i;
    int roll_numbers[5];

    // Input roll numbers
    printf("Enter roll numbers of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &roll_numbers[i]);
    }

    // Display roll numbers
    printf("\nRoll numbers of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", roll_numbers[i]);
    }

    return 0;
}
