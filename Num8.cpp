
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {

	int open = 0 ;
	int close = 0;
	char arr[30];
	char tmp;
	
	scanf("%s" , arr);
	
	for(int i = 0 ; arr[i]!=0 ; i++){
		if(arr[i] == '(') open++;
		else if(arr[i] == ')') close++;
		
		if(close > open){
			printf("NO\n");
			return 0;
		} 
	}
	
	if(open == close) printf("YES\n");
	else printf("NO\n");
	
	
	
	return 0;
}
