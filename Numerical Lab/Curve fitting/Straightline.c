#include<stdio.h>
#include<conio.h>

void main()
{
float x[100],y[100],sumx=0,sumx2=0,sumy=0,sumyx=0,b,a;
int i,n;

printf("Enter n: ");
scanf("%d",&n);

printf("Enter the values:\n");
for(i=0;i<=n-1;i++)
{
printf("Enter x[%d] and y[%d]: ",i,i);
scanf("%f%f",&x[i],&y[i]);
}

for(i=0;i<=n-1;i++)
{
sumx=sumx+x[i];
sumx2=sumx2+x[i]*x[i];
sumy=sumy+y[i];
sumyx=sumyx+y[i]*x[i];
}

printf("sumx : %f",sumx);
printf("\nsumy : %f",sumy);
printf("\nsumx2 : %f",sumx2);
printf("\nsumyx : %f",sumyx);
//for y=a+bx
b=(sumx2*sumy-sumyx*sumx)/(n*sumx2-sumx*sumx);
a=(n*sumyx-sumx*sumy)/(n*sumx2-sumx*sumx);

printf("\nHence, the required equation is y = %f + %fx",b,a);

getch();
}

