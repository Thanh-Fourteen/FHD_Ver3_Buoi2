#include <stdio.h>

int main() {
    int N, X;
    scanf("%d%d", &N, &X);
    char result = 'A' + (X - 1) / N;   // X - 1 vi 'A' = 0 'B' = 1; /N chia so lan lap
    printf("%c", result);
    return 0;
}
