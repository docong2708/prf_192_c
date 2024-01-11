#include<stdio.h>

int main(){
	char op;
	double num1, num2;
	double result;
	printf("Enter two numbers: ");
	scanf("%lf %c %lf", &num1, &op, &num2);
	switch(op){
		case '+': 
			result = num1 + num2;
			printf("Result of OP: %lf",result);
			break;
		case '-': 
			result = num1 - num2;
			printf("Result of OP: %lf",result);
			break;
		case '*': 
			result = num1 * num2;
			printf("Result of OP: %lf",result);
			break;
		case '/': 
			if(num2 == 0){
				printf("Divide by 0");
			}else{
				result = num1 / num2;
				printf("Result of OP: %lf",result);
			}
			break;
		default:
			printf("Op is not supported! \n");
	}
}
