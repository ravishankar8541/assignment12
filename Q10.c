// Write a recursive function to print reverse of a given number
#include"stdio.h"
void revNum(int);
int main()
{
     int num;
    printf("Enter Number :");
    scanf("%d",&num);
     revNum(num);
     return 0;

}
void revNum(int n)
{
  if(n==0)
    return 1;
  printf("%d",n%10);
  revNum(n/10);
}
