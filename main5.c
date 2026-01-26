
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("vovel");
    }
    else{
        printf("consonent");
    }
}
