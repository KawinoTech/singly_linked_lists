#ifndef DOBL_MAIN_H
#define DOBL_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
typedef struct teacher {
	char *name;
	char *gender;
	int age;
	struct teacher *next;
	struct teacher *prev;
}Teacher;
int doblengine(void);
int dobl_new_list(char *name, int age, char *gender, Teacher **head);
int dobl_list_push(char *name, int age, char *gender, Teacher **head);
void prompt(char *name, int *age, char *gender);
int dobl_list_pop(char *name, int age, char *gender, Teacher **head);
size_t dobl_print_list(Teacher *h);
void dobl_free_list(Teacher *head);
#endif
