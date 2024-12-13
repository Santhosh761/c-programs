#include<stdio.h>
void main()
{
    int n,rem;
    int sum=0;
    printf("Enter n value");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum is %d",sum);
}
