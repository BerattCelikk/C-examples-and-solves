/*Displaying three-digit digits on the screen of all numbers that differ from each other and in accordance with this rule
write the C program that tells you how many appropriate numbers there are. */

#include <stdio.h>

int main(){
    for(int i=100;i<=999;i++){
        int firstdigit=i/100;
        int seconddigit=(i%100)/10;
        int thirddigit=i%10;
        if((!(firstdigit==seconddigit))&&(!(firstdigit==thirddigit))&&(!(thirddigit==seconddigit))){
            printf("%5d",i);
        }
    }
    return 0 ;
}