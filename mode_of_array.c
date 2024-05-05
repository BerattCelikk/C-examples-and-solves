/*Code the program that finds and displays the mode of an array. (The mode is the value
that appears most frequently in a data set.)*/

#include<stdio.h>

int main(){
    int len;
    printf("enter length of the array:");
    scanf("%d",&len);
    int array[100];
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
    }
    int count=0,mode=0,found=0,max=0;
    for(int i=0;i<len;i++){
        count=0;
        for(int j=1;j<len-1;j++){
            if(array[i]==array[j]){
                found=1;
                count++;
            }
        }
        if(max<count){
            max=count;
            mode=array[i];
        }
    }
    if(found==1){
        printf("mode of array = %d and %d times repeated .",mode,max);
    }
    return 0 ;
}