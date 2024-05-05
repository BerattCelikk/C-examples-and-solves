/*Code the program that finds and displays the prime numbers of an array*/

#include <stdio.h>

int main(){
    int len;
    printf("enter length of the array:");
    scanf("%d",&len);
    int array[100];

    for(int i=0;i<len;i++){
        printf("enter a number : ");
        scanf("%d",&array[i]);
    }
    
    printf("Prime numbers in array = ");

    int isPrime=1;
    
    for(int i=0;i<len;i++){
        isPrime=1;
        if(array[i]<=1){
            isPrime=0;
        }
        for(int j=2;j<array[i];j++){
            if(array[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%3d",array[i]);
        }
    }

    
    return 0 ;
}