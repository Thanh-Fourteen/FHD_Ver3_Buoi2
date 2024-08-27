//2.23
#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int t1 = a * 3600 + b * 60;
	int t2 = c * 3600 + d * 60 + 1;
	if (t1 < t2) {
		printf("Takahashi");
	} else {
		printf("Aoki");
	}
	return 0;
}
