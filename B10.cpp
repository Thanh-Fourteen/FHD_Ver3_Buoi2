#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a;
        scanf("%d", &a);

        for (int i = 1; i <= a; ++i) {
            if (a % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

