#include "main.h"
#include <stdbool.h>
#include <string.h>
int link_stack_engine(void)
{
	bool iterate;
	char *choice = NULL;
	Student *top;
	size_t len;
	char name[20], gender[5];
	int age;
	iterate = true;
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
		printf("%lu", len);
		if (len > 2)
		{
			printf("\nError\nPLease enter one character\n\n");
			continue;
		}
		/*len = strlen(choice);*/
		if (len > 0 && choice[len - 1] == '\n')
		{
		    choice[len - 1] = '\0';
		    len--;
		}
		
		switch (atoi(choice))
		{
			case 1:
				prompt(name, &age, gender);
				link_stack_push(name, age, gender, &top);
				break;
				
			default:
			printf("Hello");
		}
		free(choice);
		choice = NULL;
		len = 0;
    	}
    	return(0);
}
		
