#include <stdio.h>

int main(){
	int q, a, b, x;
	scanf("%d", &q);
	
	while(q--){
		scanf("%d%d%d", &a, &b, &x);
		if(x % (a + b) == 0) printf("yes\n");
		else printf("no\n");
	}
}
