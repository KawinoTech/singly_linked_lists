#include <stdbool.h>
#include "main.h"
/**
 * engine - deals with routing of operations
 *
 * Return: (0) Success
 * (1) if error
 */

int engine(void)
{
	bool iterate;
	size_t list_size;
	char name[20], gender[10];
	int age, operation;
	unsigned long int position;
	Student *head;
	char *input_script = "Choose operation\n1. Create new list"
	"\n2. Insert new node at the beginning"
	"\n3. Insert new node at position n"
	"\n4. Insert new node at the end"
	"\n5. Check all list items"
	"\n6. Delete node at the beginning"
	"\n7. Quit program\n\n";

	iterate = true;
	head = NULL;
	while (iterate)
	{
		printf("%s", input_script);
		scanf("%d", &operation);
		switch (operation)
		{
			case 1:
				if (head == NULL)
				{
					prompt(name, &age, gender);
					new_list(name, age, gender, &head);
				}
				else
				{
					printf("<---Error--->\n List already exist\n<------>\n");
				}
				break;
			case 2:
				if (head != NULL)
				{
					prompt(name, &age, gender);
					list_push(name, age, gender, &head);
				}
				else
				{
					printf
					("<-Error->\n List does not exist\nPlease press 1 to create\n<--->\n");
				}
				break;
			case 3:
				printf("Enter Position: ");
				scanf("%lu", &position);
				if (head != NULL && position <= print_list(head))
				{
					prompt(name, &age, gender);
					insert_n(name, age, gender, &head, position);
				}
				else
				{
					printf("<-----Error------>\n");
				}
				break;
			case 4:
				if (head != NULL)
				{
					prompt(name, &age, gender);
					list_pop(name, age, gender, &head);
				}
				else
				{
					printf
					("<-Error->\n List does not exist\nPlease press 1 to create\n<--->\n");
				}
				break;
			case 5:
				if (head != NULL)
				{
					list_size = print_list(head);
					printf("-> %lu elements\n\n", list_size);
				}
				else
				{
					printf("\nEmpty List, Press 1 to create\n");
				}
				break;
			case 6:
				del_begin(&head);
				break;
			case 7:
				if (head != NULL)
				{
					free_list(head);	
				}
				printf("\nExit\nGoodbye\n\n");
				iterate = false;
				break;
		}
	}
	return(0);
}
