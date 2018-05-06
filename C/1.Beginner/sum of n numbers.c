#include <stdio.h>

int main()
{
    int number,sum;
    printf("Enter the number which you want the sum of!\n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    printf("The sum is: %d", sum);

    return 0;
}