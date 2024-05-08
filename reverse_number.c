/*Printing the entered number in reverse*/

#include <stdio.h>

int main(){
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    int digit=0,temp=number;
    int sum=0;
    while (number != 0){
        digit=number%10;
        sum=(sum*10)+digit;
        number/=10;
    }
    printf("reverse of the %d => %d",temp,sum);
    

    return 0 ;
}