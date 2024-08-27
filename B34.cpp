#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    
    scanf("%d %d", &A, &B);
    
    double distance = sqrt(A * A + B * B);
    
    // di chuyen 1 la di chuyen 1 don vi
    // vector don vi la A/dis and B/dis
    
    double x = A / distance;            
    double y = B / distance;
    
    printf("%.12f %.12f\n", x, y);
    
    return 0;
}
