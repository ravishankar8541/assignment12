//Write a recursive function to print binary of a given decimal number
#include"stdio.h"
void ConvertIntoDecimal(int);
void ConvertIntoDecimal(int n)
{
    if(n==0)
    return 1;
    ConvertIntoDecimal(n/2);
    printf("%d",n%2);

}
int main()
{

    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    ConvertIntoDecimal(a);
    return 0;
}
