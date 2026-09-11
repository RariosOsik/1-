#include <stdio.h>
#include <locale.h>
int name();
int date();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	name();
	date();
	return 5;

}

int name()
{
    setlocale(LC_CTYPE, "RUS");
    puts("*******************************************");
    puts("*                                         *");
    puts("* Тема: разработка консольного приложения *");
    puts("*      Выполнил Панин Д.А.                *");
    puts("*                                         *");
    puts("*******************************************");
	return 1;;
}

int date()
{
	puts(" ,  ,    __   ,   __   ,");
	puts("/| /|   |  | /|     | /|");
	puts(" |  |   |  |  |  .--|  |");
	puts(" |  |.  |__|  |. |__   |");
	return 0;
}