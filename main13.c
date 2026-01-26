#include <stdio.h>
int main(){
    char ch;
    printf("Enter the charentor");
    scanf("%c",&ch);

    if(ch=='s'){
 
int a;
int b;
      
printf("Enter num1 ");
scanf("%d",&a);
printf("Enter num2 ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf(" %d%d",a,b);
    }
    else{
        printf("input is not matched");
    }
return 0;
    }
   