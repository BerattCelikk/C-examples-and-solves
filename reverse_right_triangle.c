/*Creating an reverse right triangle with stars*/
#include <stdio.h>

int main(){
    int N;
    printf("enter length of the array : ");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}