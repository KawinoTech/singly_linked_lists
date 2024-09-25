#include "dobl_main.h"
/**
 * dobl_list_push - Inserts new node at the beginning
 * @name: name of the Teacher
 * @age: age of the Teacher
 * @gender: gender of the Teacher
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int dobl_list_push(char *name, int age, char *gender, Teacher **head)
{
	Teacher *new_node = (Teacher *) malloc(sizeof(Teacher));

	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = (*head);
	(*head)->prev = new_node;
	(*head) = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	(*head)->name, (*head)->age, (*head)->gender);
	sleep(2);
	return (0);
}
