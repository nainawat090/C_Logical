
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);
    
    if(ch=='q'||ch=='w'||ch=='e'||ch=='r'||ch=='t'||ch=='y'||ch=='u'||ch=='i'||ch=='o'||ch=='p'){
        printf("upper line");
    }
    else{
        printf("input is not matched");
    }
}