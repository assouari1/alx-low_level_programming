#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
*/

void __attribute__ ((constructor)) premain()
{
	printf("You are beat! and yet, you must allow,\n");
	printf("I Bore my house upon my back!\n");
}
