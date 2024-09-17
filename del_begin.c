#include "main.h"
/**
 * del_begin - Deletes node at the beginning
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int del_begin(Student *head)
{
	Student *temp;
	
	temp = head;
	free(head->name);
	free(head->gender);
	if (head->next == NULL)
	{
		head = NULL;
	}
	else
	{
		head = head->next;
	}
	free(temp);
	sleep(2);
	return (0);
}
