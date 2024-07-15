#include<stdio.h>

float f(float x)
{
    return 1.0/(1.0 + x*x);
}

int main(){
    int i, n;
    float a, b, h, sum1 = 0, sum2 = 0, integ;

    printf("enter the lower limit: ");
    scanf("%f", &a);
    printf("enter the upper limit: ");
    scanf("%f", &b); 
    printf("enter the number of intervals: ");
    scanf("%d", &n);

    h = (b - a)/n;
    for(i = 1; i<=n-1; i += 2)
        sum1 += 4*f(a + i*h);
    
    for(i = 2; i<=n-2; i += 2)
        sum2 += 2*f(a + i*h);
    
    integ = (h/3)*(f(a) + f(b) + sum1 + sum2);
    printf("the value of the integral is: %f\n", integ);
    return 0;
}