#include "main.h"
#include "dobl_main.h"
#include "stack.h"
#include "link_stack.h"
#include <stdbool.h>
/**
 * main - Entry point of program
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int main(void)
{
    bool iterate;
    char *choice = NULL;
    size_t len;

    iterate = true;
    len = 0;
    printf("<---Welcome to DSA operations--->\n");

    while (iterate)
    {
        printf("Please choose a Data Structure\n");
        printf("1. Singly Linked Lists\n");
        printf("2. Doubly Linked Lists\n");
        printf("3. Stacks(Array)\n");
        printf("4. Stacks(Linked Lists)\n");
        printf("5. Queue(Linked Lists)\n");
        printf("6. Exit Program\n");
        if (getline(&choice, &len, stdin) == -1) {
            printf("Error reading input\n");
            continue;
        }
        
        len = strlen(choice);
        if (len > 2)
        {
        	printf("\nError\nPLease enter one character\n\n");
        	continue;
        }
        if (len > 0 && choice[len - 1] == '\n') {
            choice[len - 1] = '\0';
            len--;
        }

        if (strcmp(choice, "1") == 0)
        {
            engine();
        }
        else if (strcmp(choice, "2") == 0)
        {
            doblengine();
        }
        else if (strcmp(choice, "3") == 0)
        {
            stack_array_engine();
        }
        else if (strcmp(choice, "4") == 0)
        {
            link_stack_engine();
        }
        else if (strcmp(choice, "5") == 0)
        {
            printf("Exit\nGoodbye\n");
            free(choice);
            exit(EXIT_SUCCESS);
        }
        free(choice);
        choice = NULL;
        fflush(stdin);/*Clears the stdin, ensure no extra \n */
        len = 0;
    }

    return 0;
}
