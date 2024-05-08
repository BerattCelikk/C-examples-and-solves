//  FIND HARMONIC AVERAGE OF ARRAY.

#include <stdio.h>
#include <math.h>

int main(){
    int len;
    printf("enter length of the matrix:");
    scanf("%d",&len);
    int array[100];
    double sum=0;
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
        
        sum=sum+(1.0/array[i]);
    }
    
    double harmonic_avg=(double)len/sum;
    if(harmonic_avg==0.00){
        printf("ERROR:DIVISON BY ZERO");
    }else{
    printf("harmonic average of array = %.2lf",harmonic_avg);
    }
    return 0 ;
}