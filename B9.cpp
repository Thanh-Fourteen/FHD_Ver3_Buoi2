// 2.9
#include <stdio.h>
#include <math.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a;
        scanf("%d", &a);

        int n = sqrt(2 * a);
        if (n * (n + 1) / 2 == a) {
            printf("yes %d\n", n);
        } else {
            printf("no\n");
        }
    }

    return 0;
}

