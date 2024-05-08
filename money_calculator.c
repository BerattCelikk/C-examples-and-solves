/*A clerk wants to withdraw money from an ATM machine. Only 10, 20, 50 and
There are 100 TL banknotes left. Maximum number of large denomination banknotes,
C, which tells you on the screen how many 100, 50, 20 and 10 lira banknotes the money to be withdrawn will consist of.
Write the program.*/

#include <stdio.h>

int main(){
    int money;
    printf("enter your amount of money : ");
    scanf("%d",&money);
    int hundred=money/100;
    money%=100;
    int fifty=money/50;
    money%=50;
    int twenty=money/20;
    money%=20;
    int ten=money/10;
    printf("%d times 100 , %d times 50 , %d times 20 , %d times 10",hundred,fifty,twenty,ten);
    return 0 ;
}