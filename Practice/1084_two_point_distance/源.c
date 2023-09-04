#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, d, e;
	while (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != EOF)
	{
		e = (a - c) * (a - c) + (b - d) * (b - d);
		printf("%.2lf\n", sqrt(e));
	}
	return 0;
}