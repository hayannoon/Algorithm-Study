
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {

	char arr[100];
	char trans[100];
	scanf("%[^\n]s", arr);
	int index = 0;
	int i = 0;
	int tmp = 1;
	for (i = 0; arr[i] != '\0'; i++) {
		if ('a' <= arr[i] && 'z' >= arr[i]) {
			trans[index++] = arr[i];
		}
		else if ('A' <= arr[i] && 'Z' >= arr[i]) {
			trans[index++] = arr[i] + 32;
		}
		else continue;

	}

	trans[index] = '\0';
	printf("%s\n" , trans);



	return 0;
}
