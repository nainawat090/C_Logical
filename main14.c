#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charentor");
    scanf("%c",&ch);

    if(ch=='w'){
 
int a;
int b;
int temp;  
printf("Enter num1 ");
scanf("%d",&a);
printf("Enter num2 ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf(" %d%d",a,b);
    }
    else{
        printf("input is not matched");
    }
return 0;
    }
   