/* program to get the roots of the given equation using the do while loop in C. */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
// define function whose root to be determined
double f (double a)
{
    return 3 * a + sin (a) - exp (a);
}

int main ()
{
    // declare double data type variable
    double x, y, z, eps;
    int count; // integer data type

    x:printf (" \n Input the initial approximation for x: \n ");
    scanf (" %lf", &x);

    printf (" Input the initial approximation for y: \n ");
    scanf (" %lf", &y);

    printf (" Define the input accuracy: \n ");
    scanf (" %lf", &eps);

    printf (" Input the maximum number of iteration: \n ");
    scanf (" %d", &count);

    // use if statement to check the product of f(a) and f(b) is not less than 0
    if (f(x) * f(y) <= 0)
    {
        int iter = 1; // initialize iter to 1
        // execution of the bisection method starts here

        printf (" Iteration \t x \t \ty \t\tz \t\tf(z) \t |x - y| \n ");

        // use do while loop
        do {
            z = (x + y) / 2; // get the mid value for z
            printf (" %d \t %lf \t %lf \t %lf \t %lf \t %lf \n", iter, x, y, z, f(z), fabs(x - y));
            if (f(x) * f(z) > 0)
            {
                x = z; // assign the value of z to x
            }
            else if (f(x) * f(z) < 0)
            {
                y = z; // assign the value of z to y
            }
            iter++; // increment counter by 1
        }
        while (fabs (x - y) >= eps && iter <= count);
        printf (" \nThe root of the given equation is: %lf", z);
    }
    else
    {
        printf (" \n The root doesn't exist in the given interval. ");
        goto x;
    }

}
