#include<stdio.h>

float f(float x){
    return (x*x*x - 9*x + 1);
}

int main(){
    float a, b, c;
    int iter = 100;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    if(f(a)*f(b) > 0){
        printf("The values of a and b are not correct\n");
        return 0;
    }

    else
        do{
            c = b - f(b)*(b - a)/(f(b) - f(a));

            if(iter == 0){
                printf("\nThe root is: %f", c);
                return 0;
            }
            if(f(a)*f(c)<0)
                b = c;
            else
                a = c;
            printf("\nintermediate value: %f", c);
            iter--;
        }while((b-a)>0.0000001 || (a-b)>0.0000001);
    
    printf("\nThe approx. root is %f: ", c);
    return 0;
}