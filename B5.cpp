// c1
#include <stdio.h>

int main(){
	int a, b, c, x, cnt = 0;
	scanf("%d%d%d%d", &a, &b, &c, &x);
	
	for (int i = 1; i <= x; ++i){
		if (i % a == 0 || i % b == 0 || i % c == 0)
			cnt += 1; 
	}
	printf("%d", cnt);
}


// !!!
//#include <stdio.h>
//
//int main(){
//	int a, b, c, x, cnt = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &x);
//	
//	// /c vi tach ra cac khong
//	// *3 vi có 3 cach tieu diet khong
//	cnt = x / c * 3;
//	int mode = x % c;
//	if (mode >= b) cnt += 2;
//	else if (mode >= a) cnt += 1;
//	
//	printf("%d", cnt);
//}
