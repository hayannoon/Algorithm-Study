#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ans(int n){
	if(n==1) return 1;
	else{
		return n + ans(n-1);
	}
}

int main(int argc, char** argv) {


	int n , num , answer;
	scanf("%d" , &n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d" , &num , &answer);
		if(answer == ans(num)) printf("YES\n");
		else printf("NO\n");
	}
	

	/*
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
	*/
	
	return 0;
}
