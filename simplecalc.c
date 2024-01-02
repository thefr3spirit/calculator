/*A simple calculator
this program does basic arithmatic calculations such as addition, subtraction, multiplication, 
and division of up to 6 numbers with 2 decimal places*/
#include<stdio.h>
#include<math.h>

int main()
{
    //declaring variable;
    //for the operators +, -, *, /
    char operator;
    //for the numbers
    float num1, num2, answer;

    for(int a=11; a>10; a++)
    {
    //use scanf to accept users' input
    scanf("%f %c %f", &num1, &operator, &num2);

    //validating operators
    if(operator=='+')
    {
        answer=num1+num2;
        printf("%.2f\n", answer);
    }
    else if(operator=='-')
    {
        answer=num1-num2;
        printf("%.2f\n", answer);
    }
    else if(operator=='*')
    {
        answer=num1*num2;
        printf("%.2f\n", answer);
    }
    else if(operator=='/')
    {
        answer=num1/num2;
        printf("%.2f\n", answer);
    }
    }



return 0;
}