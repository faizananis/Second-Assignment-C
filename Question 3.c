int main()
{
    int number1=0;
    int number2=0;
    int temp=0;
    printf("Please Enter a First Number: ");
    scanf("%d",&number1);
    printf("Please Enter a Second Number: ");
    scanf("%d",&number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("\nAfter Swapping: First Number is %d and Second Number is %d",number1,number2);
    return 0;
}
