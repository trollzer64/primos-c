#include <stdio.h>
#include <stdlib.h>

void main() {
	unsigned long int i, j; //Variaveis para contagem//
	unsigned long int m, n, o; //Variaveis para sequencia//

	do {
		system("clear || cls");
		printf("Insira um n%cmero positivo: ", 163);
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
			printf("Seu numero n%co %c primo\n", 198, 130);
		} else {
			printf("Seu numero provavelmente %c primo\n", 130);
		}

		printf("Continuar? (1=Sim/0=N%co)\n", 198);
		scanf("%lu", &j);
		setbuf(stdin, NULL);

	} while (j != 0);

	printf("\n\n");
}
