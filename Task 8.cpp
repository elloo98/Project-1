#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	char input;
	int count;
	int c;
	printf("Enter a natural number under 10 or an ASCII character to start the half-pyramid:");
	scanf(" %c", &input);

	if (48 < input && input < 58) {
		count = 1;
		c = 1;
		while (input - 48 >= count) {
			while (count >= c) {
				printf("%d ", c);
				c++;

			}
			printf("\n");
			c = 1;
			count++;
		}
	}
	else if (91 > input&& input >= 65) {
		c = 1;
		count = 65;
		while (input >= count) {
			while (count - 64 >= c) {
				printf("%c", count);
				c++;
			}
			printf("\n");
			c = 1;
			count++;
		}
	}
	else if (123 > input&& input >= 97) {
		c = 1;
		count = 97;
		while (input >= count) {
			while (count - 96 >= c) {
				printf("%c", count);
				c++;
			}
			printf("\n");
			c = 1;
			count++;
		}
	}
	else {
		printf("Sorry, the program is not byilt to handle that character");
	}


	system("pause");
	return 0;
}