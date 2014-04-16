int w,h,i;
int isPrime(int number) {
	if (number < 2) return 0;
	for (i = 2; i < number; i++) {
        if (number % i == 0 && i != number) return 0;
    }

    return 1;
}

main() {
	scanf("%d %d",&w,&h);
	printf("%s\n", (isPrime(w)&isPrime(h))?"Nei":"Ja");
}
