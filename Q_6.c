
#include <stdio.h>

void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;

    if (n < 1)

        return;

    printf("%d ", f1);

    for (i = 1; i < n; i++)

    {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main()

{
    int i;

    printf("enter the number: ");

    scanf("%d", &i);

    printFibonacciNumbers(i);

    return 0;
}
