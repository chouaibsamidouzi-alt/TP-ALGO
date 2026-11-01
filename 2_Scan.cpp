#include <stdio.h>
int main(){
	float a, b, S, D, P, Div;
	printf("Give two real numbers:\n");
	scanf("%f%f", &a, &b);
	S = a + b;
	D = a - b;
	P = a * b;
	Div = a / b;
	printf("The Sum is: %f\nThe Difference is: %f\nThe Product is: %f\nThe Division is: %f", S, D, P, Div);
	return 0;
}
