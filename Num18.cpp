
#include <stdio.h>

int main(int argc, char** argv) {

	int n , m , tmp;
	scanf("%d %d" , &n , &m);
	int cnt = 0;
	int max = 0;
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d" , &tmp);
		if(tmp > m) {
			cnt ++;
		} else{
			cnt = 0;
		}
		if(cnt > max) max = cnt;
	}
	
	printf("%d\n" , max);
	
	return 0;
}
