#include <stdio.h>    // meaning is standard input output .headerfile 
/* here # is a preprocesser derictive ,means the thing written with # is executed /followed firstly 
before programs execution.*/
int main()    // main is the function from where the execution of the program is going to start 
{
    printf("hello World \n");

int a,b;
printf("enter your number: ");
scanf("%d",&a);   // scanf is a function that  reads the input given by the user 

printf("enter the number :");  // printf is the function to print the output of program.

scanf("%d",&b);

printf("opration is %d",a*b);     //here we can specify any of the opratios like a+b,a-b and a/b etc.
/* all these scanf , printf and many more function are already verified in the header file #include <stdio.h> */

return 0;    // return 0 is also a very important thing to be included at the very end of the program.

}