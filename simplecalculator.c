#include <stdio.h>
int main(){
    int firstnumber;
    int secondnumber;
    char operator;
    int sum;
    printf("Enter first number\n");
    scanf("%d" , &firstnumber);
    printf("Enter secondnumber\n");
    scanf("%d" , &secondnumber);
    printf("Enter operator\n");
    scanf(" %c" , &operator);
    if (operator== '*')
    {
        int sum = firstnumber * secondnumber;
        printf("Result = %d" , sum);
    }
    else if (operator== '/')
    {
        int sum = firstnumber / secondnumber;
        printf("Result = %d" , sum);
    }
    else if (operator== '+')
    {
        int sum = firstnumber + secondnumber;
        printf("Result = %d" , sum);
    }
    else if (operator== '-')
{
    int sum = firstnumber - secondnumber;
    printf("Result = %d" , sum);
}
    return 0;
}