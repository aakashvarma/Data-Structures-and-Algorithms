#include <stdio.h>

int main(){
	int N, R;
	scanf ("%d", &N);
	if ( N >= 1 && N <= 1000000){
		R = N % 4;
		if ( R == 0 ){
			printf("YES");
			
		}
		else{
			printf("NO");
			
		}
	}
	return 0;
}











