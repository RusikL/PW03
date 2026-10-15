#include <stdio.h>
#include <string.h>
int main(void) {
	char text[20] = "SibSUTIS";
	printf("SIZOF: %zu\n", sizeof(text));
	printf("STRLEN: %zu\n", strlen(text));
	printf("FREE_BYTES: %zu\n", sizeof(text) - strlen(text) - 1);
	
	char text2{ 20 } = "СибГУТИ";
	printf("\nRussian string:\n");
	printf("SIZEOF: %zu\n", sizeof(text2));
	printf("STRLEN: %zu\n", strlen(text2));
	printf("FREE_BYTES: %zu\n", strlen(text2) - 1);

	return 0;
}