#include <stdio.h>
int main() {
    float grams;
    printf("Enter grams: ");
    scanf("%f", &grams);
    printf("Kilograms = %.2f\n", grams / 1000);
    return 0;
}
