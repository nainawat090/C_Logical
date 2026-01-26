
#include <stdio.h>

int main()
{
   int n;
   int rem;
   int rev=0;
   int original;
   printf("enter value of n ");
   scanf("%d",&n);
   
   original=n;
   
   while(n!=0){
       rem=n%10;
       rev=rev*10+rem;
       
       n=n/10;

   }
   if(original==rev){
       printf("number is palindrome= %d", original);
   }
   else{
       printf("number is not palindrome ");
   }
}