#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int rem;

    while(n>9){
        rem=n%10;
        n=n/10;
    if(rem==0){
        printf("deck num");
    }
    else{
        printf("not a duck number ");
    }
    }
}