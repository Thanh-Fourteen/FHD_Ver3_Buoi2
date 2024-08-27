#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d",&n);
	int gio = n/60 + 21;
	int phut = n % 60;
	
	printf("%02d:%02d",gio,phut);
}
