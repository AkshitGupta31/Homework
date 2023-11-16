#include <stdio.h>
void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n], i, sum = 0, sum1 = 0;
    printf("enter the array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        int j, flag = 0;
        for (j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            sum = sum + a[i];
        else
            sum1 = sum1 + a[i];
    }
    printf("sum of prime and non prime numbers are %d and %d", sum, sum1);
}
