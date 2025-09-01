#include <stdio.h>
int main() {
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Hours = %.2f\n", minutes / 60.0);
    return 0;
}
