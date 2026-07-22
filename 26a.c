//using if else ladder
#include<stdio.h>
int main(){
int m1, m2, m3, per;


printf("enter three mark:");
scanf("%d%d%d", &m1, &m2, &m3);
per = (m1+m2+m3)/3;
  
if(per>=80 && per<=100)
{printf("distinction");}

else if(per>=60&& per<=79)
{printf("first class");}

else if(per>=40 && per<=59)
{printf("secound class");}

else if(per<=40)
{printf("fail");}



}