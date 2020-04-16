
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int submul(int n) {
	int cnt = 0;

	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (i * i < n) {
				cnt++;
			}
		}
	}
	return cnt;
}

int main(int argc, char** argv) {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", submul(i));
	}

	return 0;
}
