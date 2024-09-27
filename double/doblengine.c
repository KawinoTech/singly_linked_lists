#include <stdbool.h>
#include "dobl_main.h"
#include "main.h"
/**
 * engine - deals with routing of operations
 *
 * Return: (0) Success
 * (1) if error
 */

int doblengine(void)
{
	bool iterate;
	size_t list_size;
	char name[20], gender[10];
	int age, operation;
	/*unsigned long int position;*/
	Teacher *head;
	char *input_script = "Choose operation\n1. Create new list"
	"\n2. Insert new node at the beginning"
	"\n3. Insert new node at position n"
	"\n4. Insert new node at the end"
	"\n5. Check all list items"
	"\n6. Quit program\n\n";

	iterate = true;
	head = NULL;
	while (iterate)
	{
		printf("%s", input_script);
		scanf("%d", &operation);
		clear_input_buffer();
		switch (operation)
		{
			case 1:
				if (head == NULL)
				{
					prompt(name, &age, gender);
					dobl_new_list(name, age, gender, &head);
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
					dobl_list_push(name, age, gender, &head);
				}
				else
				{
					printf
					("<-Error->\n List does not exist\nPlease press 1 to create\n<--->\n");
				}
				break;
			case 4:
				if (head != NULL)
				{
					prompt(name, &age, gender);
					dobl_list_pop(name, age, gender, &head);
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
					list_size = dobl_print_list(head);
					printf("-> %lu elements\n\n", list_size);
				}
				else
				{
					printf
					("<-Error->\n List does not exist\nPlease press 1 to create\n<--->\n");
				}
				break;
			case 6:
				if (head != NULL)
				{
					dobl_free_list(head);
				}
				iterate = false;
				printf("Exit\nGoodbye\n");
				break;
		}
	}
	return(0);
}
