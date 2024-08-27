// c2
#include <stdio.h>

int cnt[2001];

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
		cnt[a[i]] = 1;
	}
	for(int i = 0; i <= 2000; i++) {
		if(cnt[i] == 0) {
			printf("%d",i);
			break;
		}
	}
	return 0;
}
