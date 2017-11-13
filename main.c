#include <stdio.h>
#include <stdlib.h>

void main() {
	unsigned long int i, j; //Variaveis para contagem//
	unsigned long int m, n, o; //Variaveis para sequencia//

	do {
		system("clear || cls");
		printf("Insira um numero positivo: ");
		scanf("%lu", &i);
		setbuf(stdin, NULL);

		j = 0;
		n = 1;
		o = 3;
		while (j < i) {
			m=n;
			n=o;
			o=m+n;
			j++;
		}

		if (((m-1)%i != 0)||(m == 1)) {
			printf("Seu numero nao eh primo\n");
		} else {
			printf("Seu numero provavelmente eh primo\n");
		}

		printf("Continuar? (1=Sim/0=Nao)\n");
		scanf("%lu", &j);
		setbuf(stdin, NULL);

	} while (j != 0);

	printf("\n\n");
}
