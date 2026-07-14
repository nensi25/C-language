#include<stdio.h>
int main (){

float basic, DA,HRA,PF,MA,gross,net;

printf("enter basic salary:");

scanf("%f", &basic);

DA = 0.10*basic;
printf("DA=%f\n", DA);

HRA = (basic*7.5)/100;
printf("HRA=%f\n", HRA);

MA = 300;
printf("MA=%f\n", MA);

PF = (basic*12.50)/100;
printf("PF=%f\n", PF);

gross = basic+DA+HRA+MA+PF;
printf("gross=%f\n", gross);

net =gross-PF;
printf("net=%f", net);

return 0;

}