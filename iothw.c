#include<stdio.h>
    float Area1(){
    float a,b,h,A;
    printf("enter value h = ");
	scanf("%f",&h);
	printf("enter value a = ");
	scanf("%f",&a);
	printf("enter value b = ");
	scanf("%f",&b);
	A=((a+b)*h)/2;
	printf("A=1/2*(%f*%f)*%f\n",a,b,h);
	printf("A=%0.2f",A);
}
float Area2(){
float b,h,A;
   printf("enter value b = ");
   scanf("%f",&b);
   printf("enter value h = ");
   scanf("%f",&h);
   A=(0.5*b*h);
   printf("A=0.5*%f*%f\n",b,h);
   printf("A=%02.f",A);
}
float Area3(){
    float s,A;
    printf("enter value s = ");
    scanf("%f",&s);
    A=(s*s);
    printf("A=%f*%f\n",s);
    printf("A=%02.f",A);
}
  int main()
{
    int choice;
    do{
        printf("1. trapezoidal\n ");
        printf("2. triagle\n");
        printf("3. square\n");
        printf("enter your choice = \n");
        scanf("%d",&choice);
        switch(choice)
        {
    case 1: 
    Area1();
    break;
    case 2:
    Area2();
    break;
    break;
    default:
    case 3:
    Area3();
    printf("exiting program.\n");
        }
    } while (choice !=3);
    return 0;
}

