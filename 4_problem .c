// problem to print the reverse of the array using function

#include <stdio.h>

void printArray(int arr[], int size);
void reverse(int arr[], int size);

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
/* program/function to reverse the array by swaping the variable
1,2,3,4,5,6 ---> 1(0)-6(5),2(1)-5(4),3(2)-4(3)  # here value(index) swap by(-) value (index )
int arr(the array )=arr(size-i-1);  by using for loop      */

void reverse(int arr[], int size)
{
   for (int i = 0; i < size / 2; i++)
   {
      int temp = arr[i];

      arr[i] = arr[size - i - 1]; // copy the value of arr[size-i-1] to arr[]
      arr[size - i - 1] = temp;
   }
}
int main()
{

   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   printArray(arr, 8);
   reverse(arr, 8);
   printArray(arr, 8);

   return 0;
}