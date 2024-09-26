#include "main.h"
/**
 * free_list - Frees the entire list
 * @head: head to the linked list
 *
 * Return: 0 void
 */

void free_list(Student *head)
{
	Student *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->name);
		free(temp->gender);
		free(temp);
		printf("Hello");
	}
}
