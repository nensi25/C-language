#include<stdio.h>
int main(){
int i,n,c=0;

printf("enter no:");
scanf("%d", &n);

for(i=2; i<=n-1; i++)
{
    if(n% i==0)
   c=1;

   break; 
    
}

if(c==0)
printf("prime");

else
printf("not prime");


}



