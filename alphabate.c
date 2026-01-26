#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
            char temp='A';
            for(int j=1;j<=n;j++){
                printf("%c",temp);
                temp+=1;
            }
            printf("\n");
        }
        
}