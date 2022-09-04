/* Doi mot ky tu hoa thanh ky tu thuong */
#include<stdio.h>
void main()
{
	char c;
	printf("Plaese enter a character:");
	scanf("%c", &c);
	if (c>= 'A' && c <= 'Z')
	printf("Lowercase character = %c",c + 'a' - 'A');
	else
	printf("character Entered is = %c", c);
}
