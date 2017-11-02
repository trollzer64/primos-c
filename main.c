#include <stdio.h>

void main() {
	unsigned int i, j;
	unsigned int m=3, n=1, o=3, number;

	printf("Um numero positivo: ");
	scanf("%u", &i);
	setbuf(stdin, NULL);

	j=0;
	while (j < i) {
		m=n;
		n=o;
		o=m+n;
		j++;
	}
	if (((m-1)%i != 0)||(m == 1)) {
		printf("Seu numero nao eh primo\n");
	} else {
		printf("Seu numero eh primo\n");
	}
	printf("\n\n");
	getchar();
}
