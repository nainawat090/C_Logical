#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);

    if(ch=='m'){
        int a;
        int b;
        int mul;
        printf("Enter num1 ");
        scanf("%d",&a);
        printf("Enter num2 ");
        scanf("%d",&b);
        mul=a*b;
        printf("mul= %d",mul);
    }
    else{
        printf("input is not matched");
    }

}