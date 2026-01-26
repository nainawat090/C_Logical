#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charector ");
    scanf("%c",&ch);

    if(ch=='a'){
        int a;
        int b;
        int sum;
        printf("Enter num1 ");
        scanf("%d",&a);
        printf("Enter num2 ");
        scanf("%d",&b);
        sum=a+b;
        printf("sum= %d",sum);
    }
    else{
        printf("input is not matched");
    }

}