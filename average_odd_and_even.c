/*Calculating the average of odd and even numbers from 10 random numbers*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random_number[10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        random_number[i]=rand()%100+1;      //rand()%100+1  =>      [0+1,99+1]  => [1,100]
    }
    int evensum,oddsum;
    for(int i=0;i<10;i++){
        if(random_number[i]%2==0){
            evensum+=random_number[i];
        }else{
            oddsum+=random_number[i];
        }
    }
    double evenavg=(double)evensum/10.0;
    double oddavg=(double)oddsum/10.0;
    printf("odd average = %.2lf",oddavg);
    printf("\n");
    printf("even average = %.2lf",evenavg);

    return 0 ;
}
