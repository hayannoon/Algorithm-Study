#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	int sum = 1;
	scanf("%d" , &n);
	printf("1");
	int t = n/2;
	
	for(int i = 2 ; i <=t ; i++ ){
		if(n%i == 0) {
		sum += i;
		printf(" + %d"  , i);	
		}
	}
	
	printf(" = %d" , sum);
	
	return 0;
}
