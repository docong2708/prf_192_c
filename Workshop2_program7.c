#include<stdio.h>

int main(){
	char c1, c2, t;
	int d;
	printf("Enter the first character: ");
	scanf(" %c",&c1);
	printf("Enter the second character: ");
	fflush(stdin);
	scanf(" %c",&c2);
	if(c1 > c2){
		int t = c1;
		c1 = c2;
		c2 = t;
	}
	d = c2 - c1;
	printf("ACSII Code Difference: %d\n", d);
	printf("Characters between %c and %c: \n", c1, c2);
	int c;
	for(c = c1 ; c < c2 ; c++){
		printf("%c : %d, %o, %x\n", c, c, c, c);
	}
}
