#ifndef DOBLMAIN_H
#define DOBLMAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
typedef struct teacher {
	char *name;
	char *gender;
	int age;
	struct student *next;
	struct student *prev;
}Teacher;
int doblengine(void);
int dobl_new_list(char *name, int age, char *gender, Teacher **head);
int dobl_list_push(char *name, int age, char *gender, Teacher **head);
#endif
