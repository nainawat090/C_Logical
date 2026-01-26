#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int temp=n;
    for(int i=n;i>=1;i--){

        for(int j=1;j<=i;j++){
            printf("%d",temp);

        }
        printf("\n");
        temp--;
    }
}