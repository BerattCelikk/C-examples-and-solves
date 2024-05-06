//  FIND GEOMETRIC AVERAGE

#include <stdio.h>
#include <math.h>

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    
    int array[100];
    int multiplication = 1;
    
    for(int i = 0; i < len; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
        multiplication *= array[i];
    }
    
    double geometric = pow((double)multiplication, 1.0 / len);
    
    printf("%.2lf\n", geometric);
    
    return 0;
}
