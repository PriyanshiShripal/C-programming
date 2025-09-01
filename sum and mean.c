#include <stdio.h>
int main() {
    int arr[10], sum=0;
    for(int i=0; i<10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\nMean = %.2f", sum, sum/10.0);
    return 0;
}
