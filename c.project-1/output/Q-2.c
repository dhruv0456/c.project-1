#include<stdio.h>
#include<conio.h>

int main(){

float basic,hra,da,ta,gs;

printf("Enter basic salary");
scanf("%f",&basic);

hra=(basic*10)/100;
printf("\nHRA: %f",hra);

da=(basic*5)/100;
printf("\nDA: %f",da);

ta=(basic*8)/100;
printf("\nTA: %f",ta);

gs=basic+hra+da+ta;
printf("\nGROSS SALARY: %f",gs);


}