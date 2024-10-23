#include <stdio.h>
// Multidiamensonal array

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 6, 7}, {9, 8, 6}};
    printf("the value is :%d\n", arr[0][2]);

    arr[0][2] = 5;
    arr[1][2] = 10;
    arr[2][2] = 12;
    // we can change the particular element of an array /multidimensional array by indexing

    printf("value :%d\n", arr[0][2]);
    printf("value :%d\n", arr[1][2]);
    printf("value :%d\n", arr[2][2]);

    //printing the array elements using for loop 
    for(int i=0;i<3;i++){
        for(int     j=0;j<3;j++){
        printf("values of array are :%d\n",arr[i][j]);
    }}

    return 0;
}