#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
typedef struct student {
	char *name;
	char *gender;
	int age;
	struct student *next;
}Student;
typedef struct teacher {
	char *name;
	char *gender;
	int age;
	struct student *next;
	struct student *prev;
}Teacher;
int engine(void);
size_t print_list(Student *h);
void free_list(Student *head);
void prompt(char *name, int *age, char *gender);
int new_list(char *name, int age, char *gender, Student **head);
int list_push(char *name, int age, char *gender, Student **head);
int list_pop(char *name, int age, char *gender, Student **head);
int insert_n(char *name, int age, char *gender, Student **head, long unsigned int pos);
int del_begin(Student **head);
int doblengine(void);
int dobl_new_list(char *name, int age, char *gender, Teacher **head);
int dobl_list_push(char *name, int age, char *gender, Teacher **head);
#endif
