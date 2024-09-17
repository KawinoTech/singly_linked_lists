#include "main.h"
#include <stdbool.h>
/**
 * main - Entry point of program
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int main(void)
{
	bool iterate;
	char choice[1];
	
	iterate = true;
	printf("<---Welcome to DSA operations--->\n");
	while(iterate)
	{
		printf("PLease choose a Data Structure\n");
		printf("1. Singly Linked Lists\n");
		printf("2. Doubly Linked Lists\n");
		printf("3. Exit Program\n");
		scanf("%s", choice);
		if (strlen(choice) > 1)
		{
			printf("Error\n");
			continue;
		}
		if (strcmp(choice,"1") == 0)
		{
			engine();
		}
		else if (strcmp(choice,"2") == 0)
		{
			printf("Sorry, Doubly linked list is not yet released\n");
		}
		else if (strcmp(choice,"3") == 0)
		{
			printf("Exit\nGoodbye\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Inalid input, please try again\n");
		}
	}
	return (0);
}
