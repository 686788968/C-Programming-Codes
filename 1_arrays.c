#include <stdio.h>
// arrays are like set and list in python 
// array can stores multiple values for a single variable of same data type (like as : int ). 
int main()
{

    int age[5];      // this is the syntax for array decleration == int age[5]={21,18,22,34,43};
for (int i=0;i<5;i++){      // loop used to print the values of the array from index 0 to 4 
    scanf("%d",&age[i]);
     printf("the age is %d \n", age[i]);
}
   

    return 0;
}