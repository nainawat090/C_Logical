#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int temp=n;
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                printf(" ");
                temp--;
            }
            else{
                printf("%d",temp);
                temp--;
            }
        }
        printf("\n");
    }
}