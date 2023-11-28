#include<stdio.h>  
int main()    
{    
int n,r,reverse=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
reverse=(reverse*10)+r;    
n=n/10;    
}    
if(temp==reverse)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
