# include<stdio.h>
/*
This is our first program in C.
I like C Language.
*/

int main()
{
    int a= 3;
    // int b= 7.7;  not recommended, 7.7 is not an integer.
    float b= 7.7; 
    char c= 'u';
    int d= 8;
    int e = 7+6;

    // %d - integers
    // %f - real values
    // %c- characters
    printf("The value of a is %d \n", a);
    printf("The value of b is %f %f \n", b);
    printf("The value of c is %c \n", c);

    // \n is used to start a new line after the instruction

    printf("The sum of a and d is %d \n", a+d);

    printf("The value of e is %d",e);
    return 0;
}