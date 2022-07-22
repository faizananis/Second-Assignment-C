int main()
{
    int number=0;
    int digit=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("Please Enter a digit: ");
    scanf("%d",&digit);
    number=number*10+digit;
    printf("The Given Number with the appending a given digit is: %d",number);
    return 0;
}
