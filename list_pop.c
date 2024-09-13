#include "main.h"
/**
 * list_pop - Inserts new node at the end
 * @name: name of the Student
 * @age: age of the Student
 * @gender: gender of the Student
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int list_pop(char *name, int age, char *gender, Student **head)
{
	Student *temp = *head;
	Student *new_node = (Student *) malloc(sizeof(Student));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = NULL;
	temp->next = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	(*head)->name, age, gender);
	sleep(2);
	return (0);
}
