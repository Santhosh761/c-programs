
#include <stdio.h>

void main()
{
    int a,b;
    char ope;
    printf("Enter the values a,b");
    scanf("%d %d %c",&a, &b,&ope);
    switch(ope)
    {
        case '+':("The addition %d",(a+b));
        break;
        case '-':("The subtraction %d",(a-b));
        break;
        case'*':("The multiplication %d",(a*b));
        break;
        case'/':("The division %d",(a/b));
        break;
        case'%':("The reminder %d",(a%b));
        break;
    }

}
