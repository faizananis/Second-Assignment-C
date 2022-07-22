int main()
{
    int number=0;
    int digit=0;
    int temp=0;
    printf("Please Enter a Three-Digit temp: ");
    scanf("%d",&number);
    temp=number;
    digit=temp%10;
    temp=digit*100+temp/10;
    printf("The Given Number %d after rotating its digits by one position towards right is: %d",number,temp);
    return 0;
}
