int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    number=number/10*10;
    printf("Your Given Number with the last digit zero is: %d",number);
    return 0;
}
