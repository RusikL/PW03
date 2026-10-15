#include <stdio.h>
#include <ctype.h>
int main(void) {
	char letter;
	scanf(" %c", &letter);
	printf("CODE_DEC: %d\n", (unsigned char)letter);
	printf("CODE_HEX: %x\n", (unsigned char)letter);
	printf("CODE_OCT: %o\n", (unsigned char)letter);
	printf("UPPER: %c\n", toupper((unsigned char)letter));
	printf("NEXT: %c\n", letter + 1);
	printf("PREV: %c\n", letter - 1);
	return 0;
}