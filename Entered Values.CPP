#include<stdio.h>
#include<conio.h>
void main()
{
int a;
long b;
float c;
double d;
char e;
char f[10];
clrscr();
printf("\nEnter the Value for int a:");
scanf("%d",&a);
printf("\nEnter the Value for long b:");
scanf("ld",&b);
printf("\nEnter the Value for float c:");
scanf("%f",&c);
printf("\nEnter the Value for double d:");
scanf("%lf",&d);
printf("\nEnter the Value for char e:");
scanf("%c",&e);
printf("\nEnter the value of char f:");
scanf("%s",&f);
printf("\nEntered Values are:");
printf("\nint a = %d\nlong b = %ld\nfloat c = %f\ndouble d = %lf\nchar e = %f\nchar f = %lf");
getch();
}