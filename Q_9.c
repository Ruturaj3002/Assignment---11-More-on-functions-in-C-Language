#include <stdio.h>
void squ();
int main()
{
    // code

    squ();

    return 0;
}

void squ()

{

    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    printf("the square of %d is %d", x, x * x);
}