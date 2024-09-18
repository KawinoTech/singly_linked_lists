#include "dobl_main.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of list to print
 *
 * Return: the number of nodes printed
 */

size_t dobl_print_list(Teacher *h)
{
	Teacher *temp;
	size_t i;

	temp = h;
	i = 1;
	while (temp->next != NULL)
	{
	printf("\nTeacher %lu Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	printf("      ^  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  v  ");
	i++;
	temp = temp->next;
	}
	printf("\nTeacher %lu Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	return (i);

}
