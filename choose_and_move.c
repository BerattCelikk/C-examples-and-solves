/*Code the program that takes the numbers from the user and saves them to an array. Then,
the user will input numbers one by one until the user wants to stop the program. The
program gets the numbers, finds them in the array and moves them to the end of the array
one by one.*/

#include <stdio.h>

int main() {
    int N;
    printf("Enter length of the array: ");
    scanf("%d", &N);

    int array[100];

    printf("Enter %d numbers:\n", N);
    for(int i = 0; i < N; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    printf("Array: ");
    for(int i = 0; i < N; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");

    int number;
    printf("Choose a number in this array: ");
    scanf("%d", &number);

    int found = 0;
    int index;
    for(int i = 0; i < N; i++) {
        if(array[i] == number) {
            found = 1;
            index = i;
            break; 
        }
    }

    if(found) {
        int temp = array[index]; 
        for(int i = index; i < N - 1; i++) {
            array[i] = array[i + 1]; 
        }
        array[N - 1] = temp; 
    } else {
        printf("This number is not included in the array.\n");
    }

    printf("Updated array: ");
    for(int i = 0; i < N; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");

    return 0;
}
