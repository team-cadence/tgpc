#include <stdio.h>

int i,w,h;

int p(int number) {for (i = 2; i < number; i++)if (number % i == 0 && i != number) return 0;return 1;}

int main() {
	scanf("%d %d", &w, &h);

	printf("%s\n", (p(w) && p(h)) ? "Nei" : "Ja");

	return 0;
}
