/*Code the program that finds and displays the difference between the highest value and
the lowest value of an array.*/

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
    int max=array[0],min=array[0];
    for(int i=0;i<len;i++){
        if(max<array[i])
            max=array[i];
        else if (min>array[i])
            min=array[i];
    }
    printf("MAX - MIN = %d",max-min);
    return 0 ;
}