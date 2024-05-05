/*Code the program that creates an array with the digits of a long int number that has more
than 10 numbers*/

#include <stdio.h>

int main(){
    long int number=123465123;
    int digit=0,counter=0;
    while (number != 0){
        digit=number%10;
        printf("%2d,",digit);
        digit=0;
        number/=10;
    }
    return 0 ;
}