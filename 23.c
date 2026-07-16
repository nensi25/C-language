#include <stdio.h>
int main(){
    int x, y, z;

    printf("enter x:");
    scanf("%d", &x);

    printf("enter y:");
    scanf("%d", &y);

    printf("enter z:");
    scanf("%d", &z);

    if (x>y)
    {
        if(x>z)
    
    {printf("max =%d\n", x); }
    
    else
    {printf("max =%d\n", z);}
    }
    else
    { if(y>z)
    
    { printf("max =%d", y);}
 else
 {printf("max=%d\n", z);}

    }
    }