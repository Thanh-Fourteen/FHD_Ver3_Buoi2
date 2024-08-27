#include <stdio.h>
#include <math.h>

int main() {
	double a, b, D;
	double radians, x_prime, y_prime;

	scanf("%lf%lf%lf", &a, &b, &D);

	radians = D * M_PI / 180.0;
	x_prime = a * cos(radians) - b * sin(radians);
	y_prime = a * sin(radians) + b * cos(radians);
	printf("%lf %lf", x_prime, y_prime);
	return 0;
}

