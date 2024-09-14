#include <stdbool.h>
#include "main.h"

void prompt(char *name, int *age, char *gender);
int main(void)
{
	bool iterate;
	size_t list_size;
	char name[20], gender[10];
	char *input_script;
	int age, operation, position;
	Student *head;

	iterate = true;
	head = NULL;
	input_script = "Choose operation\n1. Create new list"
		"\n2. Insert new node at the beginning"
		"\n3. Insert new node at position n"
		"\n4. Insert new node at the end"
		"\n5. Check all list items"
		"\n6. Quit program\n\n";
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
					printf("<-----Error------>\n List already exist\n<------------->\n");
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
					printf("<-----Error------>\n List does not exist\nPlease press 1 to create\n<-------->\n");
				}
				break;
			case 3:
				printf("Enter Position: ");
				scanf("%d", &position);
				if (head != NULL)
				{
					prompt(name, &age, gender);
					insert_n(name, age, gender, &head, position);
				}
				else
				{
					printf("<-----Error------>\n List does not exist\nPlease press 1 to create\n<-------->\n");
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
					printf("<-----Error------>\n List does not exist\nPlease press 1 to create\n<------>\n");
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
				{
					free_list(head);
					exit(EXIT_SUCCESS);
				}
		}
	}
	return (0);
}

void prompt(char *name, int *age, char *gender)
{
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your age: ");
	scanf("%d", age);
	printf("Enter your gender: ");
	scanf("%s", gender);
}
