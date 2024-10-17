//Program of Runge-Kutta 2nd Order in C


  #include<stdio.h>
  #include<conio.h>
  #include<math.h>
  float f(float x, float y)
  {
  float a;
  a=x*y;
  return a;
  }

  void main()
  {
    int n,i;
    float x,xf,y,h,s,s1,s2;
    //clrscr();
    printf("Enter the First value :- ");
    scanf("%d",&x);
    printf("Enter the Second value :- ");
    scanf("%d",&xf);
    printf("Enter the Lenth y :- ");
    scanf("%d",&y);
    printf("Enter the Width h :- ");
    scanf("%d",&h);
    while(x<xf)
    {
        s1=f(x,y);
        s2=f(x+h,y+h*s1);
        s=(s1+s2)/2;
        y=y+(h*s);
        x=x+h;
    }
    printf("Output = %f",y);

    getch();
  }


/*Output
Enter the First value :- 1
Enter the Second value :- 3
Enter the Lenth y :- 6
Enter the Width h :- 3
Output :- error*/
