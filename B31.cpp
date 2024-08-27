#include <stdio.h>

int main() {
	int n, m, x, t, d;
	scanf("%d%d%d%d%d", &n, &m, &x, &t, &d);
	
	// So chieu cao khi moi sinh ra
	int h0 = t - x * d;
	
	int hM = (m <= x) ? h0 + m * d : t;
	printf("%d\n", hM);
	return 0;
}
