#include <stdio.h>
int main()
{
    int n, o, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    o = n;

    while (o != 0)
    {
        remainder = o%10;
        result += remainder*remainder*remainder;
        o /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);


}
