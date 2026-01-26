

#include <stdio.h>

int main()
{
    int i=1,x,y,power=1;
    printf("Enter value of x ");
    scanf("%d",&x);
    
    printf("Enter value of y ");
    scanf("%d",&y);
    
    while(i<=y){
        power=power*x;
        i++;
    }
 printf("%d",power);   
}