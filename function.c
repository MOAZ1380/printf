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


/**
 * @brief 
 * 
 * @param n 
 */
int decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return 1;
    }

    int binaryNum[32];
    int i = 0;
    int count = 0;

    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        putchar(binaryNum[j] + '0'); 
        count++;
    }

    return count; 
}



/**
 * @brief 
 * 
 * @param num 
 * @return int 
 */
int _printint_mi(int num){
    char str[20];
    if(num < 0){
        num = -num;
    }
	sprintf(str, "%d" ,num);
	return _printstr(str);
}



int print_hex(unsigned int num) {
    if (num == 0) {
        printf("0");
        return 1;
    }

    char hexDigits[] = "0123456789ABCDEF";
    char hexResult[9]; 
    int i = 0;
    int count = 0;

    while (num != 0) {
        int remainder = num % 16;
        hexResult[i] = hexDigits[remainder];
        num = num / 16;
        count++;
        i++;
    }

    hexResult[i] = '\0';

    for (int j = i - 1; j >= 0; j--) {
        putchar(hexResult[j]);
    }

    return count;
}






int print_oct(unsigned int num){
    int number[50];
    int count = 0;    
    int x = 0;
    int i = 0;
    while (num > 0) {
        x = num % 8;
        number[i] = x;
        num = num / 8;
        count++;
        i++;
        
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", number[j]);
    }
    return count;
}