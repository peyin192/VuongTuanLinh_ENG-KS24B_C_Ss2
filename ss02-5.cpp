#include <stdio.h>

int main() {
    float length = 3.0;
    float width = 2.0;

    float perimeter = 2 * (length + width);
    float area = length * width;  // T�nh di?n t�ch h�nh ch? nh?t

    printf("chu vi: %.2f\n", perimeter);
    printf("dien tich: %.2f\n", area);

    return 0;
}

