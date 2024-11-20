#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = 2;
    
    int sum = num1 + num2;  
    printf("tong cua %d va %d la: %d\n", num1, num2, sum);
    
    int difference = num1 - num2;
    printf("hieu cua %d va %d la: %d\n", num1, num2, difference)
    
    int product = num1 * num2;
    printf("tich cua %d va %d la %d\n", num1, num2, product)
    
    int quotient = num1 / num2;
    printf("thuong cua %d va %d la %d\n", num1, num2, quotient )

    return 0;
}
