
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);
    
    if(ch=='z'||ch=='x'||ch=='c'||ch=='v'||ch=='b'||ch=='n'||ch=='m'){
        printf("lower line");
    }
    else{
        printf("input is not matched");
    }
}