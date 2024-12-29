#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int fact (int n);
int main()
{
    int n,k;
    printf("Enter the number to find factorial\t");
    scanf("%d", &n);
    k= fact(n);
    printf("The factorial of %d is %d", n,k);
    return 0;
}
int fact(int n)
{
    if ( n == 1)
    return (1);
    else
        return(n * fact(n - 1));
       
}