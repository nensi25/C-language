#include<stdio.h>
int main(){

int i, n, j, f;
float sum=0.0;

print("enter n");
scanf("%d", &n);

for ( i = 1; i <= n; i++)
{   f=1;
    
    //for j = 1; j <=i; j++

    { f=f*j;}
sum= sum+1.0/f; 
}
''
printf("%f", &sum);
return sum;
}
