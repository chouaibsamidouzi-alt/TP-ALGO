#include <stdio.h>
int main (){
	const float Pi = 3.14159;
	float R, P, S;
	printf("Give the Radius of the circle:");
	scanf("%f", &R);
	P = R * Pi * 2;
	S = R * R * Pi;
	printf("The Perimeter is: %f meters\nAnd the Surface is: %f meters squared", P, S);
	return 0; 
}
