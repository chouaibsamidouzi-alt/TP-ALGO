#include <stdio.h>
int main (){
	int a, b, S, D, P, Div, Mod;
	a = 4;
	b = 2;
	S = a + b;
	D = a - b;
	P = a * b;
	Div = a / b;
	Mod = a % b;
	printf("The Sum is: %d\nThe Difference is: %d\nThe Product is: %d\nThe Integer Division is: %d\nThe modulo is: %d\n", S, D, P, Div, Mod);
	return 0;
}
