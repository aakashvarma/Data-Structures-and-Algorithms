#include <stdio.h>

int main(){	
	int N, C, T, R = 0;
	scanf ("%d", &N);
	if ( N >= 0 && N <= 1000000){
		C = N;
		while (C != 0){
			T = C % 10;
			R = T + (R*(10));
			C = C / 10;
		}	
		if ( N == R ){
			printf ("YES");
		}
		else{
			printf ("NO");
		}
		return 0;
	}
}
