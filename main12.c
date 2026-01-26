#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);

    if(ch=='d'){
        int a;
        int b;
        int dev;
        printf("Enter num1 ");
        scanf("%d",&a);
        printf("Enter num2 ");
        scanf("%d",&b);
        dev=a/b;
        printf("dev= %d",dev);
    }
    else{
        printf("input is not matched");
    }

}