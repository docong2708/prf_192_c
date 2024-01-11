#include<stdio.h>

int main(){
	int x;
	int S = 0;
	do{
		scanf("%d", &x);
		if(x != 0){
			S += x;
		}
	}
	while(x != 0);
	printf("Sum = %d", S);
}
