
// c1;
#include <stdio.h>

int main() {
	int X,Y,a,b,c,d;   //Y : abcd
	scanf("%d",&X);
	
	int i = X + 1;
	while(true) {
		a = i/1000;
		b = i/100%10;
		c = i/10%10;
		d = i%10;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) {
			Y=i;
			printf("%d",Y);
			break;
		}
		++i;
	}
	return 0;
}


//# c2
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X); // Nh?p s? nguyên X
	
    while (1) {
        int num = ++X;
        int flag = 1;
		while (num > 0) {
	        int digit = num % 10;
	        int temp = num / 10;
	        while (temp > 0) {
	            if (temp % 10 == digit) {
	                flag = 0; 
	            }
	            temp /= 10;
	        }
	        num /= 10;
	    }
	    if (flag == 1){
	    	printf("%d", X);
	    	break;
		} 
    }
    return 0;
}

