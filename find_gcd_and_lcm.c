//  Programs that finds greatest common divisior(GCD) and least common multiple(LCM)    (WITHOUT FUNCTIONS)

#include <stdio.h>
#include <math.h>
int main(){
    int number1,number2;
    printf("enter first number : ");
    scanf("%d",&number1);
    printf("enter second number : ");
    scanf("%d",&number2);
    int gcd=1;
    int minimum=(number1<number2) ? number1:number2;
    for(int i=1;i<=minimum;i++){
        if((number1%i==0)&&(number2%i==0)){
            gcd=i;
        }
    }
    int lcm=(number1*number2)/gcd;
    printf("gcd = %d",gcd);
    printf("\n");
    printf("lcm = %d",lcm);
    return 0 ;
}