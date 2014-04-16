#include <stdio.h>
#include <stdlib.h>

main() {
	int m,n,b,v=0; scanf("%d %d %d", &m, &n, &b);
	for(;n!=b;v++,n=(n%2)?3*n+1:n/2){
		if (n <= 1 || n > m) {
			printf("%d\n", -1);
			return 0;
		}
	}
	printf("%d\n", v);
	return 0;
}
