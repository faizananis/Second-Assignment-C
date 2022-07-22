int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number&1)
    {
        printf("Your Given Number %d is Odd.",number);
    }
    else
    {
        printf("Your Given Number %d is Even.",number);
    }
    return 0;
}
