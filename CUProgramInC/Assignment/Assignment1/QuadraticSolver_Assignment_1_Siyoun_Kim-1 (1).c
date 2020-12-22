#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, rt1, rt2;

    printf("Based on the equation(a^2x+bx+c,) enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        rt1 = (-b + sqrt((b * b) + (4 * a * c))) / (2 * a);
        rt2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
        printf("This equation's discriminant is greater than 0, hence it has one positive real root and one negative real root\n");
        printf("The positive real root = %.2f and the negative real root = %.2f", rt1, rt2);
    }
    else if (discriminant == 0) {
        rt1 = rt2 = -b / (2 * a);
        printf("This equation's discriminant is 0, hence there is only one real root\n");
        printf("a root = %.2f;", rt1);
    }
    else {
        printf("This equation's discriminant is less than 0, hence there is no real root\n");
    }
    return 0;
}