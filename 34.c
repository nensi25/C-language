#include <stdio.h>
int main()
{
int n, i, first, secound, sum;


printf("enetr value:");
scanf("%d%d", &n,&n);

for ( i = 3; i <= n; i++)
{
    sum = first+secound;
   first = secound;
    secound = sum;
}
printf("%d", sum);

}