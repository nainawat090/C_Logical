#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int temp=0;
    for(int i=n;i>=1;i--){

        for(int j=1;j<=i;j++){
            temp+=2;
            printf("%d ",temp);
            

        }
        printf("\n");
        
    }
}