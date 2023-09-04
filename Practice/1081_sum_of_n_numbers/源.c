#include <stdio.h>
int main() {
	int T, i, j, a, b, sum = 0;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		sum = 0;
		scanf("%d", &b);
		for (j = 0; j < b; j++) {
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}