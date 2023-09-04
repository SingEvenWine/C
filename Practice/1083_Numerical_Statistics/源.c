#include <stdio.h>
int main() {
	int n = 1;
	double a;
	while (n!=0)
	{
		int z = 0, f = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%lf", &a);
			if (a > 0) {
				z++;
			}
			else if (a < 0)
			{
				f++;
			}
		}
		if (n != 0) {
			printf("%d %d %d\n", f, n - f - z, z);
		}
	}
	return 0;
}