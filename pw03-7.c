#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"
int main(void) {
	const char date[] = "2026";
	printf("DISTRO: %s\n", DISTRO);
	printf("RDATE: %s\n", date);
	printf("STRLEN: %zu\n", strlen(DISTRO));
	printof("SIZEOF: %zu\n", sizeof(DISTRO));
	return 0;
}