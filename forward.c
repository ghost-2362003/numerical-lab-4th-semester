#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, j;
    printf("enter the no. of values: ");
    scanf("%d", &n);
    float x[n], y[n], F[n][n], X, u, h, s, p = 1;
 
    printf("enter the values of x: ");
    for(i = 0; i<n; i++)
        scanf("%f", &x[i]);
    printf("enter the values of y: ");
    for(i = 0; i<n; i++)
        scanf("%f", &y[i]);
    h = x[1] - x[0];
    printf("enter the value of X: ");
    scanf("%f", &X);
    u = (X - x[0])/h;
    s = y[0];
    for(i = 0; i<n; i++)
        F[0][i] = y[i];
    
    for(i = 1; i<n; i++){
        for(j = 0; j<n; j++)
            F[i][j] = 0;
    }

    for(i = 1; i<n; i++){
        for(j = 0; j<n-i; j++){
            F[i][j] = F[i-1][j+1] - F[i-1][j];
        }
    }

    for(i = 0; i<n; i++){
        printf("\n");
        for(j = 0; j<n; j++)
            printf("%.2f\t", F[i][j]);
    }
    printf("\n");

    for(i = 1; i<n; i++){
        p = p*(u-i+1)/i;
        s = s + p*F[i][0];
    }

    printf("the value of X = %f is %f\n", X, s);
    return 0;
}