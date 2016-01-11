
#include <iostream>

using namespace std;

int main(void) {

	//triangle
	char copyRight = 'C';
	int varSides = 4;

	for (int i = 0; i < varSides; i++) {
		for (int k = varSides - i; k > 0; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			if (i == 2 && j == 1) {
				printf(" ");
				printf(" ");
			}
			else printf("%c ", copyRight);
		}
		printf("\n");
	}

	//performing variable switch 
	int a = 5, b = 10, tempvar = a;
	printf("Before : \n");
	printf("a = %i \n", a);
	printf("b = %i \n", b);

	a = b;
	b = tempvar;
	
	printf("After : \n");
	printf("a = %i \n", a);
	printf("b = %i \n", b);

	//output the ASCII table
	char ascii = '1'; //initialize the variable
	for (int i = 0; i < 256; i++)
	{
		ascii = char (i); //cast the number to the character
		printf("%i - %c \n", i, ascii);
	}
}
