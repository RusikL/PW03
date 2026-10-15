#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <lcoale.h>
int main(void) {
	setlocale(LC_ALL: "");
	const char text[] = "Сбой Матрицы";
	const wchar_t wideText[] = L"Сбой Матрицы";
	printf("char -> sizeof: %zu bytes, strlen: %zu bytes\n", sizeof(text), strlen(text));
	wprintf(L"wchar -> sizeof: %zu bytes, wcslen: %zu chras\n", sizeof(wideText), wcslen(wideText));
	return 0;
}