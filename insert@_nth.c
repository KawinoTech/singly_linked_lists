#include "main.h"
/**
 * insert_n - creates a new node indexing it after pos
 * @name: name of the Student
 * @age: age of the Student
 * @gender: gender of the Student
 * @head: head to the linked list
 * @pos: Position after which the node will be placed
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */
int insert_n(char *name, int age, char *gender, Student **head, int pos)
{
	Student **temp;
	Student **prev_node;
	Student *new_node;
	int position;

	new_node = (Student *) malloc(sizeof(Student));
	if (new_node == NULL)
	{
		printf("Error");
		return (1);
	}
	position = 1;
	temp = prev_node = head;
	while (position < pos)
	{
		(*temp) = (*temp)->next;
	}
	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = (*temp)->next;
	(*temp)->next = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	name, age, gender);
	sleep(2);
	return (0);
}
