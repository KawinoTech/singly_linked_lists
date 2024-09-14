#include "main.h"

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
	}
}
