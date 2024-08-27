#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; 2 * i - 1 <= n; i += 1) {
        sum += 2 * i - 1;
    }

    printf("%d\n", sum);

    return 0;
}

