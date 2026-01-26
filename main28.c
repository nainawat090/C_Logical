#include<stdio.h>
int main(){
    int n;
    int k;
    int count=0;
    int  power=1;
    printf("Enter the number n ");
    scanf("%d",&n);
    printf("Enter the number k");
    scanf("%d",&k);
    int temp;
    temp=n;
while(temp>0){
    count++;
    n/10;
}
while(count-1>0){
    power=power*10;
    n/10;
}
printf("%d",power);


}