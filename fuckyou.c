#include <stdio.h>

int isPrime(int number) {
	if (number < 2) return 0;

int i;
	for (i = 2; i < number; i++) {
        if (number % i == 0 && i != number) return 0;
    }

    return 1;
}

int main() {
	
	int width, height;

	scanf("%d %d", &width, &height);

	printf("%s\n", (isPrime(width) && isPrime(height)) ? "Nei" : "Ja");

	return 0;
}

/*
x No

x x No

x
x No

x x
x x No

x x x
x x x Yes

x x
x x
x x Yes
*/
