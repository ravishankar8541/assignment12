//Write a recursive function to print squares of first N natural numbers
#include"stdio.h"
void PrintSqurare(int);
void PrintSquare(int n)
{
    if(n==0)
        return 0;
    PrintSquare(n-1);
    printf("\nSquare of %d is %d",n,n*n);

}
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    PrintSquare(a);

}
