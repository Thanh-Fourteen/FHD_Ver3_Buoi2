// c1
#include <stdio.h>

int main() {
    long long n, k;
    scanf("%lld%lld", &n, &k);

    long long coins_given = 0; 
    long long coins_to_give = 1;
    long long current_student = 0; 
	
    while (current_student < n && coins_given + coins_to_give <= k) {
        coins_given += coins_to_give; 
        current_student++; 
        coins_to_give += 3; 
    }

    printf("%lld", current_student);

    return 0;
}




// dang nghien cuu
// c1
/*
	y tuong:
	1 + 4 + 7 + .... + x = k
	So Ptu = (x - 1) / 3 + 1
	k = (x + 1) * so Ptu / 2
	2k = (x + 1) * ((x - 1) / 3 + 1)
	2k= (x + 1)(x - 1)/3 + (x + 1)
	6k = (x + 1)(x - 1) + 3(x + 1)
	6k = (x + 1)(x + 2)
=>  sqrt(6k) ~ (x+1)
=>  sqrt(6k) - 1 ~ x
=>  Quay nguoc lai tim so luong Ptu
=>  So Ptu = (x - 1) / 3 + 1
*** Dang bi sai test case: n = 10 k = 11 or n = 10 k = 21
*/

//#include <stdio.h>
//#include <math.h>
//
//int main(){
////	long long n, k;
////	scanf("%lld%lld", &n, &k);
//	long long n = 10;
//	for(int k = 1; k <= 22; ++k){
//	long long max_coins = sqrt(6*k) - 1;
//	long long students = (max_coins - 1) / 3 + 1;
//	if (n < students) students = n;
////	printf("%lld", students);
//	printf("%lld %lld\n",k, students);
//	}
//}
