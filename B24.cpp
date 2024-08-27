// c1
#include <stdio.h>

int main() {
	int A, B, C, D, E, F, X;
	scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &X);

	int T = X / (A + C) * B * A;
	int r = X % (A + C);
	if (r > A) r = A;
	T += r * B;

	
	int Ao = X / (D + F) * E * D;
	r = X % (D + F);
	if (r > D) r = D;
	Ao += r * E;
	
	if (T > Ao) {
		printf("Takahashi");
	} else if (Ao > T) {
		printf("Aoki");
	} else {
		printf("Draw");
	}

	return 0;
}


// c2
//#include <stdio.h>
//
//int main() {
//	int A, B, C, D, E, F, X;
//	scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &X);
//
//	int quangduong1 = 0, quangduong2 = 0;
//	for (int i = 0; i < X; i++) {
//		if (i % (A + C) < A) { 
//			quangduong1 += B;
//		}
//		if (i % (D + F) < D) {
//			quangduong2 += E;
//		}
//	}
//	
//	if (quangduong1 > quangduong2) {
//		printf("Takahashi\n");
//	} else if (quangduong2 > quangduong1) {
//		printf("Aoki\n");
//	} else {
//		printf("Draw\n");
//	}
//
//	return 0;
//}
