#include<stdio.h>

int main(){
    int i, j, n;
    printf("enter the no. of values: ");
    scanf("%d", &n);
    float x[n], y[n], p = 1, s = 0, X;

    printf("enter the value of x: \n");
    for(i = 0; i < n; i++)
        scanf("%f", &x[i]);
    
    printf("enter the value of y: \n");
    for(i = 0; i < n; i++)
        scanf("%f", &y[i]);
    
    printf("enter the value of X: ");
    scanf("%f", &X);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i != j)
                p *= (X - x[j])/(x[i] - x[j]);
        }
        s += p*y[i];
        p = 1;
    }

    printf("the value of y at x = %f is %f\n", X, s);
    return 0;
}