// program to count no of +ve integers in an array 

#include <stdio.h>

int count(int arr[],int n);
// Function definition 
int count(int arr[],int n){
    int positive_integer=0;
        for (int i=0;i<n;i++){
            if(arr[i]>0){      // in this if the value of a[i]  is greater then 0 then next stetement excutes 
                positive_integer ++;     // increase the value of variable by one 
            }
        }
    return positive_integer;   // function is returning an integer type int
}


int main(){

    	int arr[]={1,2,-3,4,5,-6,7,8,-9,-8,-5};
    printf("the no of +ve integer is %d \n", count(arr,11)); // hover over count to see the statement 


   return 0;
}