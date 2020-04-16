#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int submul(int num){
	int cnt = 0;
	for(int i = 1 ; i < num ; i++){
		if(num%i==0) cnt++;
	}
	return cnt+1;
}

int main(int argc, char** argv) {

	char arr[50];
	char num[50];
	int sum = 0;
	
	scanf("%s" , arr);
	
	int tmp = 1;
	int i = 0;
	int cnt= 0;
	while(tmp != 0){
		tmp = arr[i];
		if(48 <= tmp && 57 >= tmp){
			num[cnt++] = tmp;
		}
		i++;
	}
	
	for(i=0 ; i < cnt ; i++){
		sum *=10 ;
		sum += (num[i]-48);
	}
	
	printf("%d\n" , sum);
	printf("%d\n" , submul(sum));
	
	return 0;
}
