#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the number between 1 and 12:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:printf("January");
    break;
    case 2:printf("Febuarry");
    break;
    case 3:printf("March");
    break;
    case 4:printf("April");
    break;
    case 5:printf("May");
    break;
    case 6:printf("June");
    break;
    case 7:printf("July");
    break;
    case 8:printf("August");
    break;
    case 9:printf("SEptmber");
    break;
    case 10:printf("octomber");
    break;
    case 11:printf("noveber");
    break;
    case 12:printf("December");
    break;
}
return 0;
}
