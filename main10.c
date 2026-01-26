#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);

    if(ch=='s'){
        int a;
        int b;
        int c;
        int d;
        int sub;
        printf("Enter num1 ");
        scanf("%d",&a);
        printf("Enter num2 ");
        scanf("%d",&b);
        printf("Enter num3 ");
        scanf("%d",&c);
        printf("Enter num4 ");
        scanf("%d",&d);
        sub=a-b-c-d;
        printf("sub= %d",sub);
    }
    else{
        printf("input is not matched");
    }

}