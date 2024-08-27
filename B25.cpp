// c1
#include <stdio.h>
#include <string.h>

int main() {
    char S[4]; 
    scanf("%s", S);

    char result[7] = "";

    while (strlen(result) < 6) {
        strcat(result, S);
    }

    printf("%.6s\n", result);

    return 0;
}


// c2
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char a[3];
	scanf("%s", a); 
	int b=strlen(a);
	if(b==1){
		printf("%s%s%s%s%s%s",a,a,a,a,a,a);
	}else if(b==2){
		printf("%s%s%s",a,a,a);
	}else{
		printf("%s%s",a,a);
	}
	return 0;
}
