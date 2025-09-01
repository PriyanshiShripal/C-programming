#include <stdio.h>
int main() {
    float m1, m2, m3, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;

    if(avg >= 70)
        printf("Grade: Distinction\n");
    else if(avg >= 60)
        printf("Grade: First class\n");
    else if(avg >= 50)
        printf("Grade: Second class\n");
    else if(avg >= 35)
        printf("Grade: Third class\n");
    else
        printf("Fail\n");

    return 0;
}
