/*Creating a right triangle with stars*/

#include <stdio.h>

int main(){
    int len;
    printf("enter length of the right triangle : ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}