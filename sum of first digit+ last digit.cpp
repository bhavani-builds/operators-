#include <stdio.h>
int main() {
    int n, first, last;
    scanf("%d", &n);

    last = n % 10;
    first = n;
    while (first >= 10)   
        first /= 10;
}

