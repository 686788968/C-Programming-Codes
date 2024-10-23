#include <stdio.h>
int main(){
int aqi ;
printf("Enter the aqi ");
scanf("%d",& aqi);

if(aqi>=5 && aqi<=25){
    printf("air quality is good ");
}
else if(aqi>25 && aqi<=50){
    printf("air quality is modrate ");

}
else if (aqi>50 && aqi<=70){
    printf("air quality is bad stay inside ");
}
else {
printf("air quality is very bad stay safe inside ");
}
return 0;
}