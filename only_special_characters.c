/*ch[ ] = {'a', 'S', 'd', '*', '1', ........'+'} is a char array with random letters, numbers and special
characters. Create another array just with the special characters of ch[ ]*/

#include <stdio.h>

int main(){
    int len;
    printf("Enter length of the array:");
    scanf("%d", &len);
    char array[100];
    printf("Enter characters: ");
    for(int i = 0; i < len; i++){
        scanf(" %c", &array[i]); 
    }
    printf("Special characters: ");
    for(int i = 0; i < len; i++){
        if(((array[i] >= '0') && (array[i] <= '9')) || ((array[i] >= 'a') && (array[i] <= 'z')) || ((array[i] >= 'A') && (array[i] <= 'Z'))){
            continue;
        }else{
            printf("%c ", array[i]);
        }
    }
    return 0 ;
}
