#include <stdio.h>

#define PI 3.14

int main() {
    float radius = 5.0;
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("ban kinh: %.2f\n", radius);
    printf("chu vi: %.2f\n", circumference);
    printf("dien tich: %.2f\n", area);

    return 0;
}

