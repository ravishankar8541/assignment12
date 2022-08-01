//Write a recursive function to print octal of a given decimal number
void ConvertIntoOctal(int);
void ConvertIntoOctal(int n)
{
    if(n==0)
    return 1;
    ConvertIntoOctal(n/8);
    printf("%d",n%8);

}
int main()
{

    int a;
    printf("Enter a decimal number :");
    scanf("%d",&a);
    ConvertIntoOctal(a);
    return 0;
}
