#include "main.h"

/**
 * _isalpha - Function that checks for Alphabetic char
 * @c: Character to be Checked
 * Return: 1 if c is a letter, 0 IF NOT
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
