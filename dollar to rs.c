#include <stdio.h>
int main() {
    float dollars;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    printf("Rupees = %.2f\n", dollars * 48);
    return 0;
}
