#include <stdio.h>
int main() {
    float rs;
    printf("Enter Rupees: ");
    scanf("%f", &rs);
    printf("Dollars = %.2f\n", rs / 48);
    return 0;
}
