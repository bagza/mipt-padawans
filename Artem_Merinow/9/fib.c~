//looooooooooooooooooooooooong arithmetic

#include <stdio.h>
#include <string.h>

#define N 255  // phi(1000) порядка 1.e209

// sum = a + b
void add(char a[N], char b[N], char sum[N]) {
	
	char over = 0;
	int i;

	for(i = N - 1; i >= 0; i--) {
        	sum[i] = a[i] + b[i] + over;         	
            	over = sum[i] / 10; 
            	sum[i] %= 10;         	
    	}	
}

// fibonacci func
int fib(int m) {

	char f0[N], f1[N], f2[N];
	int i;	
	
	// f0 = f1 = f2 = 0..00 
    	for(i = 0; i < N; i++) {
        	f0[i] = f1[i] = f2[i] = 0;        	
    	}
 	
	f0[N - 1] = 1; // f0 = 0..01
	f1[N - 1] = 1; // f1 = 0..01 
	f2[N - 1] = 1; // f2 = 0..01
    	  	
     	for(i = 2; i <= m; i++) {
        	add(f0, f1, f2);
		memmove(f0, f1, sizeof(char)*N); //copy f1 to f0
       		memmove(f1, f2, sizeof(char)*N); //copy f2 to f1 				        	
    	}
	
	
	for(i = 0; f2[i] == 0; i++)
		;
    	
    	for(; i < N; i++) {
        	printf("%d", f2[i]);
    	}	
	
	printf("\n");
}

int main() {

	int i, n; 
	
	scanf("%d", &n); 
	fib(n);
	         	
    	return 0;
}


