#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char arr[14];
	char gender;
	int age;
	
	for(int i = 0 ; i < 14 ; i++){
		scanf("%c" , &arr[i]);
	}
	

	if(arr[7]== '1' || arr[7]=='2'){
	age = 2019 - (1900 + (10*(arr[0]-48)+(arr[1]-48)) )+ 1;
	gender = (arr[7]=='1')? 'M' : 'W';
	}
	else{ 
	age = 2019 - (2000 + (10*(arr[0]-48)+(arr[1]-48))) + 1;
	gender = (arr[7]=='3') ? 'M' : 'W';
	}
	
	
	printf("%d %c\n", age , gender );


	


	
	return 0;
}
