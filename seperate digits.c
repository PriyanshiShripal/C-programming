#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Digits: ");
    while(n>0) {
        int digit = n % 10;
        n /= 10;
        printf("%d ", digit);
    }
    return 0;
}
