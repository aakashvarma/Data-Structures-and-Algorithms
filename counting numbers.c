#include <stdio.h>

int main(){
	int N, d, R, c = 0;
	scanf ("%d %d", &N, &d);
	if (N > 0 && N <= 10000000 && d >= 0 && d <= 9){
		while(N != 0){
			R = N % 10;
			if (R == d){
				c += 1;
			}
			N = N / 10;
		}
		printf("%d \n", c); 
	}
	return 0;
}


















