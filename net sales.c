#include <stdio.h>
int main() {
    float gross_sales, discount, netsales;
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    if(gross_sales > 200000)
        discount = gross_sales * 0.15;
    else if(gross_sales > 100000)
        discount = gross_sales * 0.10;
    else
        discount = gross_sales * 0.05;

    netsales = gross_sales - discount;
    printf("Net Sales = %.2f\n", netsales);

    return 0;
}
