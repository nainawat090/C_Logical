

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int temp=0;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            temp+=2;
            printf("%d ",temp);
            
        }
        printf("\n");
    }
    
    
    
}