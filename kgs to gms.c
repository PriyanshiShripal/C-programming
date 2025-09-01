#include <stdio.h>
int main() {
    float kg;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    printf("Grams = %.2f\n", kg * 1000);
    return 0;
}
