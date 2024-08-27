#include <stdio.h>

int main() {
    int q, a, b, c;;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%d%d%d", &a, &b, &c);

        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}

