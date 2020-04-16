#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int n;
	scanf("%d" , &n);
	int arr[100];


	for(int i = 0 ; i < n ; i++){
			scanf("%d" , &arr[i]);
	}
	
	
	int min = 214700000;
	int max = -214700000;
	
	for(int i = 0 ; i < n ; i++){
		if(min > arr[i]) min = arr[i];
		if(max< arr[i]) max = arr[i];
	}
	
	printf("%d\n" , max-min);
	
	
	return 0;
}
