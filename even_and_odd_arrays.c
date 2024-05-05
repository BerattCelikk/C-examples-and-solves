/*Code the program that creates two different array for the even numbers and the odd
numbers of a one dimensional array*/

#include <stdio.h>
int main(){
    int len;
    printf("enter length of the array:");
    scanf("%d",&len);
    int array[100];
    int even[100],odd[100];
    int evennumber=0,oddnumber=0;
    for(int i=0;i<len;i++){
        printf("enter a number:");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<len;i++){
        if(array[i]%2==0){
            even[evennumber]=array[i];
            evennumber++;
        }else{
            odd[oddnumber]=array[i];
            oddnumber++;
        }
    }
    printf("ODD ARRAY : ");
    for(int i=0;i<oddnumber;i++){
        printf("%3d",odd[i]);
    }
    printf("   ");
    printf("EVEN ARRAY : ");
    for(int i=0;i<evennumber;i++){
        printf("%3d",even[i]);
    }
    return 0 ;
}