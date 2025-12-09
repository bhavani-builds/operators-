#include <stdio.h>
int main() {
    float total, used;
    scanf("%f %f", &total, &used);

    printf("Remaining = %.2f GB", total - used);
}
