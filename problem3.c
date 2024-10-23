#include <stdio.h>

int main()
{
    // printing table of a number
    int table[10];
    int n; // the number whose table is to be printed
    printf("Enter the number :");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1); // in array just multiply by 5 and i+1 to print 5x(0+1)=5,5x(1+1)=10.
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the table is %d\n", table[i]);
    }

    return 0;
}
