#include <stdio.h>
int main() {
    char sex;
    int boys=0, girls=0;
    for(int i=1; i<=50; i++) {
        printf("Enter sex of student %d (M/F): ", i);
        scanf(" %c",&sex);
        if(sex=='M' || sex=='m') boys++;
        else if(sex=='F' || sex=='f') girls++;
    }
    printf("Boys = %d\nGirls = %d", boys, girls);
    return 0;
}
