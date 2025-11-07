#include <stdio.h>
#include <math.h>

double calculate_discriminate(double a, double b, double c);
int main(void)
{
    printf("Given a quadratic equation of the form a*x^2 + b * x + c\n");
    
    double a,b,c;
    double square_root1, square_root2;
    
    printf("Please enter a: ");
    scanf("%lf", &a);
    
    printf("Please enter b: ");
    scanf("%lf", &b);
    
    printf("Please enter c: ");
    scanf("%lf", &c);
    
    double quadratic = calculate_discriminate(a, b, c);
    if (quadratic<0) {
        printf("There are no real solutions");
    }
    else if (quadratic == 0) {
        square_root1 = -b / (2*a);
        printf("There is one real solution: %.2lf", square_root1);
    }
    else {
        square_root1 = ((-b) + sqrt(quadratic)) / (2*a);
        square_root2 = ((-b) - sqrt(quadratic)) / (2*a);
        
    printf("There are 2 real solutions\n");
    printf("Solution 1: %.2lf", square_root1);
    printf("\nSolution 2: %.2lf", square_root2);
    
    return 0;
}
}

double calculate_discriminate(double a, double b, double c) {
    return ((b*b)-4*a*c);
}
