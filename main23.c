


#include <stdio.h>

int main()
{
    int i=2;
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            
            n=n/i;
             printf("%d",i);
        }else{
         i++;   
        }
    }
}