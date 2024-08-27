#include <stdio.h>

int main() {
    int V, A, B, C;
    scanf("%d%d%d%d", &V, &A, &B, &C);
	
	V = V % (A + B + C);

    V -= A;
    if (V < 0) {
    	printf("F");
	} else {
		V -= B;
		if (V < 0) printf("M");
		else printf("T");
	}
}
