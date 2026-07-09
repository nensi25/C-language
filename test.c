#include<stdio.h>
int main(){
    int x,y,temp;

    printf("x");
    scanf("%d",x);

    printf("y");
    scanf("%d",y);

    printf("befor swapping \n x=%d \n y=%d \n ", x,y);

    temp=x;
    x=y;
    y=temp;

    printf("after swapping \n x=%d \n y=%d \n", x,y);

    return 0;

}