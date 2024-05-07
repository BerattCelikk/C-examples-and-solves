//BODY MASS INDEX CALCULATOR

#include <stdio.h>

int main(){
    double height;
    printf("enter your height in meters:");
    scanf("%lf",&height);
    int weight;
    printf("enter your weight in kilogram:");
    scanf("%d",&weight);
    double bmi=(double)weight/(height*height);
    printf("your bmi = %.2lf",bmi);

    return 0 ;
}