#include <stdio.h>
int main(){
    int x, y, z, c;

printf("enter value of x,y");
    scanf("%d%d",&x,&y);

    printf("1.addition\n");
    printf("2.multiplication\n");
    printf("3.subtraction\n");
    printf("4.divison\n");
  //  printf("\nenter chiose");
    scanf("%d", &c);

    switch(c)
{    case 1: 
     z=x+y;
     printf("addition=%d", z);
     break;

     case 2:
     z=x-y;
     printf("%d", z);
     break;

     case 3: 
     z=x*y;
     printf("%d", z);
     break;
    
    case 4:
    z=x%y;
    printf("%d", z);
    break;
}

}