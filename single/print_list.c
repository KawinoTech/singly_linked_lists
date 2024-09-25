#include "main.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(Student *h)
{
	Student *temp;
	size_t i;

	temp = h;
	i = 1;
	while (temp->next != NULL)
	{
	printf("\nStudent %lu Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	i++;
	temp = temp->next;
	}
	printf("\nStudent %lu Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	return (i);

}
