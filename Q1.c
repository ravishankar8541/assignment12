//Write a recursive function to print first N natural numbers
#include"stdio.h"
void f1(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    f1(n);
}
void f1(int x)
{
    int s;
    if(x==0)
    return 1;
    f1(x-1);
    printf("\n%d",x);
}