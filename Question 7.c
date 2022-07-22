int main()
{
    int number = 0;
    int count=0;
    int result=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    while(number)
    {
        count++;
        if(number&1)
        {
            break;
        }
            number=number>>1;
    }
    printf("The LSB 1 in Given Number is located at %d position.",count);
    return 0;
}
