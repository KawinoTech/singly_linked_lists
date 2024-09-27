#include "stack.h"
#include <stdbool.h>
#include <string.h>
#define EMPTY_STACK() printf("Error, empty stack\n");
int stack_array_engine(void)
{
	bool iterate;
	int i;
	int top;
	int data;
	size_t len;
	
	char *no_of_elements = NULL;
	char *choice = NULL;
	len = 0;
	top = -1;
	iterate = true;
	while (iterate)
	{
		printf("PLease choose the no. of elements\n");
		printf("in the stack: ");
		if (getline(&no_of_elements, &len, stdin) == -1)
		{
		    printf("\nError reading input\n");
		    continue;
		}
		no_of_elements[len - 1] = '\0';
		if (atoi(no_of_elements) == 00)
		{
			printf("Invalid Input\n");
			continue;
		}
		break;
	}
	int array[atoi(no_of_elements)];
	while (iterate)
	{
		printf("\n1. Push an element\n");
		printf("2. Pop an element\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("5. Exit Program\n");
		if (getline(&choice, &len, stdin) == -1)
		{
		    printf("\nError reading input\n");
		    continue;
		}
		len = strlen(choice);

		if (len > 0 && choice[len - 1] == '\n') {
		    choice[len - 1] = '\0';
		    len--;
		}
		
		
		switch (atoi(choice))
		{
			case 1:
				if (top != (atoi(no_of_elements) - 1))
				{
					printf("Enter Integer(Data): ");
					scanf("%d", &data);
					top++;
					array[top] = data;
				}
				else
				{
					printf("Error, Stack Overflow\n");
				}
				break;
			case 2:
				if (top != -1)
				{
					top--;
				}
				else
				{
					EMPTY_STACK()
				}
				break;
			case 3:
				if (top != -1)
				{
					printf("Top Element - %d\n", array[top]);
				}
				else
				{
					EMPTY_STACK()
				}
				break;
			case 4:
				if (top != -1)
				{
					for (i = 0; i <= top; i++)
					{
						printf("Data - %d\n", array[i]);
					}
				}
				else
				{
					EMPTY_STACK()
				}
				break;
			case 5:
				iterate = false;
				printf("Exit\nGoodbye\n\n");
				break;
				
			default:
				printf("Invalid input\n");
		}
		free(choice);
		choice = NULL;
		len = 0;
    	}
    	free(no_of_elements);
    	return(0);
}

		
	
