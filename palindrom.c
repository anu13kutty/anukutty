#include <stdio.h>

int main()
{
    int n, r= 0, remainder, a;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    a= n;


    while( n!=0 )
    {
        remainder = n%10;
        r= r*10 + remainder;
        n /= 10;
    }

    if (a== r)
        printf("%d is a palindrome.", a);
    else
        printf("%d is not a palindrome.",a);
}
    
