
#include <stdio.h>

int main(int argc, char** argv) {

	int n;
	int arr[100];
	int cnt = 0;
	scanf("%d" , &n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d" , &arr[i]);
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		bool flag = false;
		for(int j = i+1 ; j < n ; j++){
			if(arr[i]<=arr[j]) {
				flag = true;
				break;	
			}
		}
		if(!flag) cnt++; 
	}
	
	printf("%d\n" , cnt);
	
	
	
	
	
	return 0;
}
