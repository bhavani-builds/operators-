#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);

    printf("%s", (age >= 18) ? "Adult" : "Child");
}

