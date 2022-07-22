int main()
{
    int number=0;
    int sum=0;
    printf("Please Enter a three-digit Number Only: ");
    scanf("%d",&number);
    sum=sum+number%10;
    number=number/10;
    sum=sum+number%10;
    number=number/10;
    sum=sum+number%10;
    number=number/10;
    printf("\nThe Sum of given Three-Digit Number is: %d",sum);
    return 0;
}
