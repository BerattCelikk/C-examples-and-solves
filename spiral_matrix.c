/*The user will enter the length (N) of the matrix on the keyboard. Code the program that
generates a two dimensional array (NxN) and fills the array with numbers from 1 to N2
in spiral order. Two examples are given below.*/

#include <stdio.h>

int main(){
    int N;
    printf("enter length of the matrix:");
    scanf("%d",&N);
    int number=1,i,j,tour=0;
    int array[100][100];
    for(tour=0;tour<=N/2;tour++){
        for(i=tour,j=tour;j<N-tour;j++){
            array[i][j]=number++;
        }
        i++;j--;
        for( ;i<N-tour;i++){
            array[i][j]=number++;
        }
        i--;j--;
        for( ;j>=tour;j--){
            array[i][j]=number++;
        }
        i--;j++;
        for( ;i>tour;i--){
            array[i][j]=number++;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%5d",array[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}