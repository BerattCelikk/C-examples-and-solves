/*Program that reverses an N-element array entered from outside.*/

#include <stdio.h>

int main(){
    int N;
    printf("enter length of the array : ");
    scanf("%d",&N);
    int array[100];
    
    for(int i=0;i<N;i++){
        printf("enter a number : ");
        scanf("%d",&array[i]);
    }

    int reversearray[100];
    
    for(int i=0;i<N;i++){
        reversearray[i]=array[N-i-1];
    }
    printf("real array = ");

    for(int i=0;i<N;i++){
        printf("%3d",array[i]);
    }

    printf("\n");
    printf("reverse array = ");

    for(int i=0;i<N;i++){
        printf("%3d",reversearray[i]);
    }
    return 0 ;
}