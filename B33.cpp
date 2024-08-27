// c1
//#include <stdio.h>
//
//int main() {
//    int A, B, K;
//    scanf("%d %d %d", &A, &B, &K);
//
//    int count = 0;
//    long long slime = A;
//
//    while (slime < B) {
//        slime *= K;
//        count++;
//    }
//
//    printf("%d\n", count);
//
//    return 0;
//}
















//// c2 log bi sai so
//#include <stdio.h>
//#include <math.h>
//
//// B <= A * K^n
//// B/A <= K^n
//// log_K_(B/A) <= n 
//// log(B/A)/log(k) <= n
//
//int main() {
//    int A, B, K;
//    scanf("%d%d%d", &A, &B, &K);
//    
//    int n = ceil(log(1.0 * B / A) / log(K));
//    printf("%d\n", n);
//    
//    return 0;
//}

