
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='s'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'){
        printf("middle line");
    }
    else{
        printf("input is not matched");
    }
}