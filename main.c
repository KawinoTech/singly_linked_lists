#include "main.h"
/**
 * main - Entry point of program
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int main(void)
{
	unsigned int choice;

	printf("<---Welcome to DSA operations--->\n");
	printf("PLease choose a Data Structure\n");
	printf("1. Singly Linked Lists\n");
	printf("2. Doubly Linked Lists\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		engine();
	}
	else
	{
		printf("Sorry, Doubly linked list is not yet released\n");
	}
	return (0);
}
