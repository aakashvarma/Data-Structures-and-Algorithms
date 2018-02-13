#include <stdio.h>

int main(){
	int i, j, N = 10;
	int F[N];
	F[0] = 0;
	F[1] = 1;
	for( i = 1; i <= N ; i ++){
		F[i+1] = F[i-1] + F[i];
	}
	for ( j = 0; j <= N; j++){
		printf("%d", F[j]);
	}
}
