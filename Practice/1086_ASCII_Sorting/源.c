#include <stdio.h>
int main() {
	char a, b, c, temp = 0;
	while (scanf(" %c%c%c", &a, &b, &c) != EOF) {
		if (a > b) {
			temp = a; a = b; b = temp;
		}
		if (a > c) {
			temp = a; a = c; c = temp;
		}
		if (b > c) {
			temp = b; b = c; c = temp;
		}
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}