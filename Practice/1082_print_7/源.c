#include <stdio.h>
int main() {
	int t, N, i, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &N);
		for (j = 1; j <= N; j++) {
			if (j % 7 == 0 || j % 10 == 7 || j / 10 % 10 == 7 || j / 100 % 10 == 7 || j / 1000 % 10 == 7) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
}