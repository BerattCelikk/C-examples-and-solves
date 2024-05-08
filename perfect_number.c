/*The sum of all positive integer factors except itself is equal to itself.
It is called a perfect number. For example, the sum of the positive factors of the number 28, excluding itself, is
Since 1+2+4+7+14 = 28, the number 28 is a perfect number. Accordingly, entered from the keyboard
Write a C program to tell whether a number is a perfect number or not.*/

#include <stdio.h>

int main(){
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(number<=0){
        printf("%d is not a perfect number.",number);
    }else{
        if(number==sum){
        printf("%d is a perfect number.",number);
        }
        else{
            printf("%d is not a perfect number.",number);
        }
    }
    
    return 0 ;
}