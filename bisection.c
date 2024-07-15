#include<stdio.h>

float f(float x){
	return (x*x*x - x - 4);
}

void bisection(float a, float b){
	float c;
	do{
		c = (a+b)/2;

		if (f(c)*f(a) < 0)
			b = c;
		else
			a = c;
        
        printf("intermediate roots: %f\n", c);
	}while ((b-a)>0.000001 || (a-b)>0.000001);

    printf("The root is: %f\n", c);
}

int main(){   
    float a, b;
    printf("Enter the lower limit: ");
    scanf("%f", &a);
    printf("Enter the upper limit: ");
    scanf("%f", &b);
    
    if(f(a)*f(b) > 0)
        printf("You have not assumed right a and b\n");
    
    else
	    bisection(a, b);
	
    return 0;
}