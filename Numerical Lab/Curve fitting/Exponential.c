#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,i;
float Y[20],sumx=0,sumy=0,sumxy=0,sumx2=0,x[20],y[20];
float a,b,A;
printf("\n C program for exponential curve fitting\n");
printf("enter the value of number of terms n:");
scanf("%d",&n);
printf("enter the value of x: ");
for(i=0;i<=n-1;i++){
scanf("%f",&x[i]);
}
printf("\n enter the value of y: ");

for(i=0;i<=n-1;i++){
scanf("%f",&y[i]);
}
for(i=0;i<=n-1;i++){
y[i]=log(y[i]);
}
for(i=0;i<=n-1;i++){
sumx= sumx +x[i];
sumx2= sumx2 +x[i]*x[i];
sumy= sumy +y[i];
sumxy= sumxy +x[i]*y[i];
}
printf("sumx : %f ",sumx);
printf("\nsumy : %f ",sumy);
printf("\nsumx2 : %f ",sumx2);
printf("\nsumxy : %f ",sumxy);
A=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);
a=exp(A);
printf("\n\n the curve is Y = %.3f e^%.3fx",a,b);
return 0;
}
