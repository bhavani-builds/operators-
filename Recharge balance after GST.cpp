#include <stdio.h>
int main() {
    float amount;
    scanf("%f", &amount);

    float gst = amount * 18 / 100;
    printf("Net Balance = %.2f", amount - gst);
}

