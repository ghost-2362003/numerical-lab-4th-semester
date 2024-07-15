#include<stdio.h>

int main(){
    int i, j, n;
    printf("no. of values: ");
    scanf("%d", &n);
    float x[n], y[n], F[n][n], X, u, h, s, p = 1;

    printf("Enter the x-values: ");
    for(i = 0; i<n; i++)
        scanf("%f", &x[i]);
    
    printf("Enter the y-values: ");
    for(i = 0; i<n; i++)
        scanf("%f", &y[i]);
    printf("Enter the value of X: ");
    scanf("%f", &X);

    h = x[1] - x[0];
    s = y[n-1];
    u = (X - x[n-1])/h;

    for(i = 0; i<n; i++)
        F[0][i] = y[i];

    for(i = 1; i<n; i++)
        for(j = 0; j<n; j++)
            F[i][j] = 0;

    for(i = 1; i<n; i++)
        for(j = i; j<n; j++)
            F[i][j] = F[i-1][j] - F[i-1][j-1];
    
    for(i = 0; i<n; i++){
        printf("\n");
        for(j = 0; j<n; j++)
            printf("%f\t", F[i][j]);
    }

    for(i = 1; i<n; i++){
        p *= (u + i - 1)/i;
        s += p*F[i][n-1];
    }

    printf("\n\nThe value of f(%f) is %f", X, s);
    return 0;
}