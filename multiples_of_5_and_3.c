/*Printing the multiples of 5 and 3 between 2 numbers entered externally*/

#include <stdio.h>

int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    if(a>b){
        for(int i=b;i<=a;i++){
            if((i%3==0)&& (i%5==0)){
                printf("%3d",i);
            }
        }
    }else if(b>a){
        for(int i=a;i<=b;i++){
            if((i%3==0)&& (i%5==0)){
                printf("%3d",i);
            }
        }
    }else{
        printf("please check your numbers and try again.");
    }

    return 0 ;
}