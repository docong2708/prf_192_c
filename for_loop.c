#include<stdio.h>

int main(){
	int n, i;
	int sum1 = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		sum1 += i;
	}
	printf("\n\nSum1 = %d\n", sum1);
	int sum2 = 0;
	for(i = 1; i <= n; i++){
		sum2 += i;
	}
	printf("Sum2 = %d\n", sum2);
	int sum3 = 0;
	for(i = 1; i <= n; i++){
		sum3 += i;
	}
	printf("Sum3 = %d", sum3);
}

