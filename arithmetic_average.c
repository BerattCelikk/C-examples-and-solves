//  FIND ARITHMETIC AVERAGE

#include <stdio.h>
int main(){
    int len;
    printf("enter length of array:");
    scanf("%d",&len);
    int array[100];
    int sum=0;
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    double arithmetic=(double)sum/len;

    printf("%.2lf",arithmetic);
    return 0 ;
}