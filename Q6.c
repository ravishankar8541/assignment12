//Write a recursive function to print first N even natural numbers in reverse order#
#include"stdio.h"
void PrintOdd(int);
void PrintOdd(int n)
{
    if(n==0)
        return 1;
    printf("%d ",2*n);
    PrintOdd(n-1);


}
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    PrintOdd(a);
    return 0;
}
