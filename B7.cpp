// C1
#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a, b;
        scanf("%d%d", &a, &b);

        int x = 1;
        for (int i = 2; i <= a && i <= b; ++i) {
            if (a % i == 0 && b % i == 0) {
                x = i;
            }
        }
        
        printf("%d\n", x);
    }

    return 0;
}


// c2
#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a, b;
        scanf("%d%d", &a, &b);

        while (a != b){
        	if (a > b) a -= b;
        	else b -= a;
		}
        
        printf("%d\n", a);
    }

    return 0;
}



// c3
#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a, b;
        scanf("%d%d", &a, &b);

        while (b != 0){
        	int r = a % b;
        	a = b;
        	b = r;
		}
        
        printf("%d\n", a);
    }

    return 0;
}
