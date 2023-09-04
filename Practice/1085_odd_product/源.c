#include <stdio.h>
int main() {
	int n, a, i, j;
	while (scanf("%d",&n)!=EOF)
	{
		j = 1;
		for (i = 0; i < n; i++) {
			scanf("%d", &a);
			if (a % 2 != 0) {
				j *= a;
			}
		}
		printf("%d\n", j);
	}
	return 0;
}