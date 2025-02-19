#include <stdio.h>

float calculateArea(float r) {
    return 3.14 * r * r;
}

float calculateCircumference(float r) {
    return 2 * 3.14 * r;
}

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculateArea(radius);
    circumference = calculateCircumference(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
