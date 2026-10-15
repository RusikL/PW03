#include <stdio.h>
int main(void) {
	char text[50];
	int width;
	scanf("%49s %d", text, &width);
	printf("%*s\n", width, text);
	printf("%-*s\n", width + 5, text);
	return 0;
}