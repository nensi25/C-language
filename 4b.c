//(b)without using extra variable
#include <stdio.h>
int main()
{

    float a, b, c;

    printf(" enter the value of a : ");
    scanf("%f", &a);

    printf(" enter the value of b : ");
    scanf("%f", &b);

    a = a + b; // a = a*b ;
    b = a - b; // b = a / b ;
    a = a - b; // a = a / b ;

    printf("after swapping the value of a is : %f\n ", a);
    printf("after swapping the value of b is : %f ", b);

    return 0;
}

 