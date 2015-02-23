#include <stdio.h>

long long int fib(int m){

	if (m == 0 || m == 1) return 1;	

	int x = 1;	//F(n-2)		
	int y = 1;	//F(n-1)	
	int res = 0;	//F(n)
	int i;

	for (i = 2; i <= m; i++){
		res = x + y;
		x = y;
		y = res;
	}
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", fib(n));
    	return 0;
}
