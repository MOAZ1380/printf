#include "main.h"
/**
 * _printstr - moaz
 * @str: moa
 * Return: moaz
*/
int _printstr(char *str)
{
	int count = 0;
	while (*str)
	{
	count++;
	_putchar(*str);
	str++;
	}
	return (count);
}
/**
 * _printint - moa
 * @num: moaz
 * Return: moa
*/
int _printint(int num)
{
	char str[20];
	sprintf(str, "%d" ,num);
	return _printstr(str);
}
