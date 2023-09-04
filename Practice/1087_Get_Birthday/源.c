#include <stdio.h>
int main() {
	int n, i, year, month, day;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%*6d%4d%2d%2d%*d", &year, &month, &day);
		printf("%4d-%02d-%02d\n", year, month, day);
	}
	return 0;
}