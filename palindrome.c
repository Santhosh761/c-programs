#include<stdio.h>
int main()
{
    int n,rem,temp;
    int rev=0;
    printf("Enter n value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
{
    printf("palindrome");
}
else{
printf("not palindrome");
}
return 0;
}
