
#include <stdio.h>

int whoWin(int a , int b){
	if(a==1){
		if(b==1) return 3;
		else if(b==2) return 2;
		else return 1;
	} else if(a==2){
		if(b==1) return 1;
		else if(b==2) return 3;
		else return 2;
	} else{
		if(b==1) return 2;
		else if(b==2) return 1;
		else return 3;
	}
}

int main(int argc, char** argv) {

int a,b,n;
scanf("%d" , &n);
int arr1[100];
int arr2[100];
for(int i = 0 ; i < n ; i++){
	scanf("%d" , &arr1[i]);
}
for(int i = 0 ; i < n ; i++){
	scanf("%d" , &arr2[i]);
}	
	
	for(int i = 0 ; i < n ; i++){
		
		
			int tmp = whoWin(arr1[i] , arr2[i]) ;
		if(tmp==1) printf("A\n");
		else if(tmp==2) printf("B\n");
		else printf("D\n");
		
		
	}
	
	return 0;
}
