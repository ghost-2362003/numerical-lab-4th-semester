#include<stdio.h>

float f(float x){
    return 1.0/(1.0 + x*x);
}

int main(){
    float a, b, s = 0, h, integ;
    int i, n;
    printf("enter the no. of intervals: ");
    scanf("%d", &n);
    printf("enter the lower limit: ");
    scanf("%f", &a);
    printf("enter the upper limit: ");
    scanf("%f", &b);

    h = (b - a)/n;
    for(i = 1; i<=n-1; i++)
        s += f(a + i*h);
    
    integ = (h/2)*(f(a) + f(b) + 2*s);
    printf("the value of the integral is: %f\n", integ);
    return 0;
}