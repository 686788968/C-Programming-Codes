#include <stdio.h>
// here is the program to calculate the average of marks of 5 students using arrays
int main(){
     
      int marks[5];
      marks[0]=56;
      marks[1]=78;
      marks[2]=34;
      marks[3]=43;
      marks[4]=78;

      int sum =0;

      for(int i=0;i<5;i++){
         sum+= marks[i];
      }
printf("sum is %d\n",sum);
printf("the average of marks is %d \n",sum/5);
   return 0;
}