#include "main.h"
/**
 * prompt: requests user input and stores the values
 * @name: name of the Student
 * @age: age of the Student
 * @gender: gender of the Student
 * Return: void
 */

void prompt(char *name, int *age, char *gender)
{
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your age: ");
	scanf("%d", age);
	printf("Enter your gender: ");
	scanf("%s", gender);
}
