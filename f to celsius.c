#include <stdio.h>
int main() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    printf("Celsius = %.2f\n", (5.0/9) * (f - 32));
    return 0;
}
