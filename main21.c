#include<stdio.h>
int main(){
    int i=1;
    int sum=0;

    while(i<=500){
        if(i%7==0){
            sum=sum+i;
         
        }
           i++;
       
    }
     printf("%d",sum);
}