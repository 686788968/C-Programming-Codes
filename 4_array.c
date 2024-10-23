#include <stdio.h>

//void reverse();
//void reverse(){
    

int main(){


    int arr[6]={1,2,3,4,5,6};
    int* ptr=&arr[6];
    for (int i=0;i<6;i++){
        printf("value : %d\n",*ptr);
        ptr--;  } 
        
    


return 0;
}