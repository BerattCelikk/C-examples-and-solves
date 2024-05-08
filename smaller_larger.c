/*A program that places the elements of an array, the smaller ones at the beginning of the array, and the larger ones at the end*/

#include <stdio.h>

int main(){
    int len;
    printf("enter length of the array:");
    scanf("%d",&len);
    int array[100];
    int temp;
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%5d",array[i]);
    }

    return 0 ;
}