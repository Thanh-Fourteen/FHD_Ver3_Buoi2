#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

	// De dien tich lon nhat thi w and l phai gan nhau
	// Chia 4 de tim ra so gan voi w va l nhat
    long long width = N / 4;
    
    // N la chu vi cua hcn nen ta lay N/2 - w de tim canh con lai
    long long length = N / 2 - width;

    printf("%lld %lld\n", width, length);

    return 0;
}

