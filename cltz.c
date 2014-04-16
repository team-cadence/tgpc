#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args) {
	int m, n, b;

	scanf("%d %d %d", &m, &n, &b);

	int v = 0;


	while (n != b) {
		v++;
		n=(n%2)?3*n+1:n/2;	
		if (n == b) {
			printf("%d\n", v);
			return 0;
		}

		if (n <= 1 || n > m) {
			printf("%d\n", -1);
			return 0;
		}
	}

	printf("%d\n", v);

	return 0;
}
