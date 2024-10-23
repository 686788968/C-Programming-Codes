// program to print the table of 2,3,5 by using 2 dimensional array and using for loop 

#include <stdio.h>

int main(){

    	int a[3][10];    // here 3 indicates 2,3,5 and 10 indicates 1 to 10 table 
        int multiply[]={2,3,5};

        for (int i = 0; i < 3; i++)   // a[3] == i  
        {
            for (int j = 0; j< 10; j++)  //a[10] == j
            {
                a[i][j]=multiply[i]*(j+1);
            }
            
        }
    for (int i = 0; i < 3; i++)   //copying the same code from top to print the table /to write the print statement 
        {
            for (int j = 0; j< 10; j++)
            {
                printf("the table of a[i][j] is %d\n",a[i][j]);
            }
            printf("\n");
        }




   return 0;
}