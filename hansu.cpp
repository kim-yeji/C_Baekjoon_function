#include<stdio.h>

int main() {
	int num;
	int cnt = 0;

	int a = 0, b = 0, c = 0;
	scanf("%d", &num);
	if (num < 100) printf("%d", num);
	else {
		cnt = 99;
		for (int i = 100; i <= num; i++) {
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;

			if ((a - b) == (b - c)) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}