#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Моя программа");
	getchar(); //
	puts("ну и ну");
	return 5;

}