/*Searching for Elements in the Array*/

#include <stdio.h>

int main(){
    int array[]={1,3,5,7};
    int N;
    printf("enter a number : ");
    scanf("%d",&N);
    int isincluded=0;
    int index=0;
    for(int i=0;i<4;i++){
        if(N==i){
            isincluded=1;
            index=i;
        }
    }
    if(isincluded==1){
            printf("this number included in array and index of number is %d",index);
        }else{
            printf("this number doesn't included in this array.");
        }
    return 0 ;
}