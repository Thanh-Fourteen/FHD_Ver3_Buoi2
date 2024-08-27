#include <stdio.h>

int To_hop(int n, int k) {
	int ans = 1;
	if ( k > n - k) k = n - k;
	for (int i = 1; i <= k; ++i){
		ans = ans * (n - k + i) / i;
	}
	return ans;
}


void Tam_giac_can(int b) {
	for (int i = 0; i < b; i++) { // i thu tu hang
		for (int j = b; j > i; j--)
			printf("  ");
		for (int j = 0; j <= i; j++)
			printf("%d   ", To_hop(i, j));
		printf("\n");
	}
}

void Tam_giac_vuong(int b) {
	for (int i = 0; i < b; i++) { // i thu tu hang
		for (int j = 0; j <= i; j++)
			printf("%d   ", To_hop(i, j));
		printf("\n");
	}
}
void Truy_van(int q) {
	for (int a = 0; a < q; a++) {
		int n, b;
		scanf("%d %d", &n, &b); // b so hang
		if (n == 1) {
			Tam_giac_can(b);
		} else if (n == 2) {
			Tam_giac_vuong(b);
		}
	}
}

int main() {
	int q;
	scanf("%d", &q);
	Truy_van(q);
	return 0;
}
