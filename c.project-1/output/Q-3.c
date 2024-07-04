#include<stdio.h>
#include<conio.h>

int main(){

    int angle1,angle2,angle3;

    printf("Enter the first angle:\n");
    scanf("%d",&angle1);

    printf("Enter the second angle:\n");
    scanf("%d",&angle2);

    angle3=180-(angle1+angle2);

    printf("Third angle is:%d\n",angle3);

}