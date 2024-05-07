/*C program containing integers from 1 to 999 whose sum of cubed digits is equal to itself*/

#include <stdio.h>
#include <math.h>
int main(){
    
    for(int i=1;i<=999;i++){
        int sum=0;
        int temp=i,digit=0;
        while (temp !=0){
            digit=temp%10;
            sum=sum+pow(digit,3);
            digit=0;
            temp/=10;
        }
        if(sum==i){
            printf("%3d,",i);
        }
    }

    return 0 ;
}