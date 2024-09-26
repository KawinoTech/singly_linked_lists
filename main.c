#include "main.h"
#include "dobl_main.h"
#include "stack.h"
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
        printf("3. Stacks\n");
        printf("4. Queue\n");
        printf("5. Exit Program\n");
        
        // Read input
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

        // Remove newline character from input
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
        else if (strcmp(choice, "5") == 0)
        {
            printf("Exit\nGoodbye\n");
            free(choice);
            exit(EXIT_SUCCESS);
        }

        // Clear input for next iteration
        free(choice);
        choice = NULL;
        len = 0;
    }

    return 0;
}
