
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {

	int n;
	int arr[100];
	int trans[100];
	int copy[100];
	int max = -1;
	int maxIndex = -1;
	int tmp;
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		trans[i] = 0;
		copy[i] = arr[i];
	}

	

	for (int i = 0; i < n; i++) {
		tmp = 1;
		while (tmp != 0) {
			tmp = arr[i] % 10;
			arr[i] /= 10;
			trans[i] += tmp;
		}
	}


	for (int i = 0; i < n; i++) {
		if (max <= trans[i]) {
			if (max == trans[i]) {
				if (copy[maxIndex] < copy[i]) {
					maxIndex = i;
				}

			}
			else {
				maxIndex = i;
				max = trans[i];
			}
		}
	}

	printf("%d\n", copy[maxIndex]);


	return 0;
}
