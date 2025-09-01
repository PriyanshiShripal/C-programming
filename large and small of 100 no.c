#include <stdio.h>
int main() {
    int arr[100], max, min;
    for(int i=0; i<100; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(int i=1; i<100; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Largest = %d\nSmallest = %d", max, min);
    return 0;
}
