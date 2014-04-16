#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args) {
	int m, n, b;

	scanf("%d %d %d", &m, &n, &b);

	int v = 0;

	int n_2_counter = 0;

	while (n != b) {
		v++;

		// printf("#%d: n = %d, b = %d\n", v, n, b);

		if (n % 2 == 0)
			n /= 2;
		else 
			n = 3 * n + 1;

		if (n == b) {
			printf("%d\n", v);
			return 0;
		}

		if (n < 1 || n > m) {
			printf("%d\n", -1);
			return 0;
		}

		if (n == 2) {
			n_2_counter++;
		}

		if (n_2_counter == 9) {
			printf("%d\n", -1);
			return 0;
		}
	}

	printf("%d\n", v);

	return 0;
}
