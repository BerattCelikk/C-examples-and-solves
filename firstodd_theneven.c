/*C program that moves odd elements in an array of n elements to the beginning of the array and even elements to the end of the array.*/

#include <stdio.h>

int main(){
    int array[100];
    int len;
    printf("enter length of the array: ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        printf("enter a number: ");
        scanf("%d",&array[i]);
    }

    int temp;
    int odd_index = 0;
    int even_index = len - 1;

    while (odd_index < even_index) {
        
        if (array[odd_index] % 2 == 0) {
            temp = array[odd_index];
            array[odd_index] = array[even_index - 1];
            array[even_index - 1] = temp;
            even_index--;
        } else {
            odd_index++;
        }
    }

    printf("Array: ");
    for(int i=0;i<len;i++){
        printf("%3d",array[i]);
    }
    return 0 ;
}
