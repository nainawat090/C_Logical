
#include<stdio.h>
int main(){
    int n;
    float sum=0;
    int count=0;
    int rem;
    printf("Enter number ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum =sum+rem;
        count++;
         n=n/10;
         
        
        
         
    }
    printf("sum= %f",sum/count);
}