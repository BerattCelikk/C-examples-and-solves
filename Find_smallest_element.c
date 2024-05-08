/*A program that finds the smallest element in an array of n elements and the address of this element.*/

#include <stdio.h>

int main(){
    int len;
    printf("enter length of the array:");
    scanf("%d",&len);
    int array[100];
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int index;
    for(int i=0;i<len;i++){
        if(min>array[i]){
            min=array[i];
            index=i;
        }
    }
    printf("smallest number of the array = %d and included in %d",min,index+1);
    return 0 ;
}