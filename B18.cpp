//#include <stdio.h>
//#include <stdbool.h>
//
//bool isPrime(int n) {
//    if (n <= 1)
//        return false;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//
//    if (isPrime(N))
//        printf("Yes");
//    else
//        printf("No");
//
//    return 0;
//}


#include <stdio.h>

int main() {
    int N, flag = 1;
    scanf("%d", &N);

    for(int i = 2; i * i <= N; ++i){
    	if (N % i == 0){
    		flag = 0;
    		break;
		}
	}
	
	if (flag == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
