/// Program to add a and b only if value for a is even

#include<stdio.h>
void main()
{
    int a=5;
    int b=6;
    // Check if a is even or not
    // if true
    if( a % 2 == 0)
    {
        printf("Value of a is even and result is : %d", (a+b));
    }
    //if false
    else{
        printf("Value of a is not even");
    }
}
