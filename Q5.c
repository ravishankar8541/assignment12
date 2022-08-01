//Write a recursive function to print first N even natural numbers.
#include"stdio.h"
void PrintOdd(int);
void PrintOdd(int n)
{
    if(n==0)
        return 1;
    PrintOdd(n-1);
    printf("%d ",2*n);

}
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    PrintOdd(a);
    return 0;
}
