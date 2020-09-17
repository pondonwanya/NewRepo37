#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  num, x[100],i;
	printf("Calculate Grade Program\n\n");
	printf("Enter student number = ");
	scanf_s("%d", &num);

	char auksorn[100];
	for (i = 0; i < num; i++) {
		printf("Enter score student [%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	printf("\n--------------Show Student Grade--------------\n\n");
		for (int i = 0; i < num; i++) {
			if (x[i] >= 90 && x[i] <= 100) {
				auksorn[i] = 'A';
			}
			else if (x[i] >= 80 && x[i] <= 89) {
				auksorn[i] = 'B';
			}
			else if (x[i] >= 70 && x[i] <= 79) {
				auksorn[i] = 'C';
			}
			else if (x[i] >= 50 && x[i] <= 69) {
				auksorn[i] = 'D';
			}
			else if (x[i] >= 0 && x[i] <= 49) {
				auksorn[i] = 'F';
			}
		}

		for (i = 0; i < num; i++) {
			if (x[i] >= 0 && x[i] <= 100) {
				printf("Student [%d] \n", i);
				printf("Score %d Grade %c\n\n", x[i], auksorn[i]);
			}
		}
	return 0;
}