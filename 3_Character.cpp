#include <stdio.h>
int main (){
	char a, b, c, d, abcd;
	printf("Write four characters (all in one line):\n");
	scanf("%c%c%c%c", &a, &b, &c, &d);
	printf("Your characters are:\n%c\n%c\n%c\n%c\n%c%c%c%c", a, b, c, d, a, b, c, d);
	return 0;
}
