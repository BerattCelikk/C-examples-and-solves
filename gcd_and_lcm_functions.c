//  Programs that finds greatest common divisior(GCD) and least common multiple(LCM)    (WITH FUNCTIONS)

#include <stdio.h>

int gcd_calculator(int a,int b){
    int minimum=(a<b) ? a:b;
    int gcd=1;
    for(int i=1;i<=minimum;i++){
        if((a%i==0)&&(b%i==0)){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    int lcm=a*b/gcd_calculator(a,b);
    printf("lcm = %d",lcm);
    printf("\n");
    printf("gcd = %d",gcd_calculator(a,b));
    return 0;
}