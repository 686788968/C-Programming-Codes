#include <stdio.h>

int main(){

	float salary;
    printf(" what's your salary :");
    scanf("%f",&salary);

    float* ptr =&salary;

    printf("the address is %p and value is %.2f\n",ptr,*ptr);

    salary=*ptr *2;
    printf("salary:%f",salary);


   return 0;
}