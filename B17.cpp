#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	
	int start = ceil(sqrt(a));
	int end = sqrt(b);
	
	printf("%d", end - start + 1);
}
