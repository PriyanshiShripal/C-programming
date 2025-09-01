#include <stdio.h>
int main() {
    int arr[200], pos=0, neg=0, zero=0;
    for(int i=0; i<200; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);
    return 0;
}
