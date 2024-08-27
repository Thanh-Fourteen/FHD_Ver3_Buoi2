#include <stdio.h>
#include <math.h>

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int a, b;
        scanf("%d%d", &a, &b);

        int result = pow(a, b);
        printf("%d\n", result);
    }

    return 0;
}

