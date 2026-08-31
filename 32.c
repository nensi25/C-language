#include <stdio.h>
void main()
{
int i, n, fact=1;


printf("enetr no to find factorial:");
scanf("%d", &n);
for (i=1; i<=n; i++)

{
    fact =fact*i;
}
printf("factorial of given no is %d\n", fact);


}