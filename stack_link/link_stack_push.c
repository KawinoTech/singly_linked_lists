#include "main.h"
/**
 * link_stack_push - Inserts new node at the beginning
 * @name: name of the Student
 * @age: age of the Student
 * @gender: gender of the Student
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int link_stack_push(char *name, int age, char *gender, Student **top)
{
	Student *new_node = (Student *) malloc(sizeof(Student));

	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = (*top);
	(*top) = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	(*top)->name, (*top)->age, (*top)->gender);
	sleep(2);
	return (0);
}

