#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "");
	wchar_t name[50];
	wprintf(L"Введите позывной: ");
	if (wscanf(L"%49ls", name) == 1) {
		wprintf(L"Агент %ls  авторизован в системе\n", name);
	}
	return 0;
}