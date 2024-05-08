/* In a class of 20 students, the grades taken by students from a course will be entered from the keyboard. Notes
Once entered, it finds the average of the class, the highest and lowest grade in the class, and appears on the screen.
Write the code of the display program in C language */

#include <stdio.h>

int main(){
    int array[20];
    int sum=0;
    for(int i=1;i<=20;i++){
        printf("enter the %d.student grade : ",i);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    int max=array[1],min=array[1];
    for(int i=1;i<=20;i++){
        if(max<array[i]){
            max=array[i];
        }else if(min>array[i]){
            min=array[i];
        }
    }
    printf("max grade of students : %d",max);
    printf("\n");
    printf("min grade of students : %d",min);
    double avg=(double)sum/20;
    printf("\n");
    printf("average of students' grade : %.2lf",avg);
    return 0 ;
}