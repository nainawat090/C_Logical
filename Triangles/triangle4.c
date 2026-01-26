

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int temp=n*n/2+n/2;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",temp);
            temp--;
        }
        printf("\n");
    }
    
    
    
}