#include <stdio.h>
// using pointers to print the objects of an array 
int main(){
        //array 
        int marks[4]={23,34,65,45};
        // pointer 
        int* ptr=&marks[0];
        ptr++;
    	printf("value of ptr: %u\n",*ptr);
for(int i=0;i<3;i++){
    //printf("the marks at index %d is %d\n",i,marks[i]);
    printf("the marks at index %d  are %d\n",i,*ptr);
    ptr++;
}

   return 0; 
}