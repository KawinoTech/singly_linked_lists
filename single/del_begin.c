#include "main.h"
/**
 * del_begin - Deletes node at the beginning
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int del_begin(Student **head)
{
	Student *temp = *head;

	if (*head == NULL)
	{
		printf("Error: List is empty, cannot delete\n");
		return (1);
	}
	/* Move the head pointer to the next node */
	*head = (*head)->next;
	/*Free the memory occupied by the original head node*/
	free(temp->name);  /*Free  string if dynamically allocated*/
	free(temp->gender);  /*Free  string if dynamically allocated*/
	free(temp);  /* Free the node itself */
	printf("Successfully deleted the first node.\n");
	return (0);
}
