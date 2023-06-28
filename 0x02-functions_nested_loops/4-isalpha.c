#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character tobe checked
 * Return: 1 if c is a letter, 0 otherwuse
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
