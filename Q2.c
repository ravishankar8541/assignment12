// Write a recursive function to print first N natural numbers in reverse order
#include"stdio.h"
void PrintRev(int);
void PrintRev(int n)
{
    if(n==0)
        return 1;
    printf("%d ",n);
  PrintRev(n-1);


}

    int main()
    {
        int a;
        printf("Enter a number :");
        scanf("%d",&a);
        PrintRev(a);
        return 0;

    }
