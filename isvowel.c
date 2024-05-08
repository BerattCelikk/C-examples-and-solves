/*Program to Find Out Whether a Letter Entered from the Keyboard is a Vowel*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(((ch>='a')&&(ch<='z'))){
        printf("%c is a letter and ",ch);
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
            printf("%c is vowel",ch);
        }else{
            printf("%c is consonant",ch);
        }
    }else{
        printf("%c is not a letter",ch);
    }
    return 0 ;
}