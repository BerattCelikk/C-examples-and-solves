/*Code the program that sorts and displays the elements of a one-dimensional array from
lowest to the highest.*/

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
    int temp;
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
        printf("%4d",array[i]);
    }
    return 0 ;
}