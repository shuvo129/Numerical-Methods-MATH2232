
#include<stdio.h>
#include<math.h>

/* Define the function to be integrated here: */
double f(double x){
  return (1/x);
}

int main(){
  int n,i;
  double a,b,h,x,sum=0,integral;
  printf("\nEnter the no. of sub-intervals: ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%lf",&a);
  printf("\nEnter the final limit: ");
  scanf("%lf",&b);
  /*Begin Simpson's 1/3rd Procedure: */
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);

  printf("\nThe integral is: %lf\n",integral);
}
