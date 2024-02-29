#include <stdio.h>
#define MAX_LINE_LENGTH 200//Constant

//User:Admin function
void Admin()
{
    char uname[40];
    char passwd[40];
    int loginSuccessful = 0;
    while (!loginSuccessful)
    {
        printf("\nEnter your username: ");
        scanf("%s", uname);

        if (strcmp(uname, "exit") == 0)
        {
            printf("Returning to the menu\n");
            break;
        }

        printf("Enter your password: ");
        scanf("%s", passwd);

        if ((strcmp(uname, "Bilal") == 0) && (strcmp(passwd, "12345") == 0)) // Store the Username and Password for Admin Login
        {
            printf("\nYou have logged in\n");
            loginSuccessful = 1;

            int choice;

            while (choice != 1 && choice != 2)
            {
                printf("\n1. View doctors details\n");
                printf("2. Add doctors details\n");
                while (1)
                {
                    printf("\nEnter your choice: ");
                    if (scanf("%d", &choice) == 1)
                        break;
                    else
                    {
                        // Clear the input buffer if reading an integer fails
                        while (getchar() != '\n');
                            
                        printf("Invalid input. Please enter a valid integer.\n");
                    }
                }
                printf("\n");
                if (choice == 1)
                {
                    FILE *fptr;
                    char line[MAX_LINE_LENGTH];

                    fptr = fopen("doctors_records.txt", "r");//File Showing doctors data

                    if (fptr != NULL)
                    {
                        while (fgets(line, sizeof(line), fptr))
                        {
                            printf("%s", line);
                        }
                        fclose(fptr);
                    }
                    else
                    {
                        printf("Error opening or reading the file.\n");
                    }
                    printf("\nif you want to add doctors press 4: ");
                    scanf("%d", &choice);
                }
                else if (choice == 2)
                {
                    FILE *fptr;
                    char line[MAX_LINE_LENGTH];

                    fptr = fopen("doctors_records.txt", "a");//For writing new data in the file

                    if (fptr != NULL)
                    {
                        printf("Enter new data of doctors (type 'exit' to stop):\n");

                        while (1)
                        {
                            scanf("%199[^\n]", line);

                            // Check if 'exit' is entered to break out of the loop
                            if (strcmp(line, "exit") == 0)
                            {
                                break;
                            }

                            fprintf(fptr, "%s\n", line);
                            printf("Enter next doctor's data (type 'exit' to stop):\n");
                            getchar(); // Consume the newline character left in the buffer
                        }

                        fclose(fptr);

                        // After adding doctors, ask if the user wants to view details, go back to the menu, or exit
                        printf("1. View doctors details\n");
                        printf("3. Exit\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);

                        if (choice == 1)
                        {
                            // View doctors' details again
                            FILE *viewFile;
                            char viewLine[MAX_LINE_LENGTH];

                            viewFile = fopen("doctors_records.txt", "r");

                            if (viewFile != NULL)
                            {
                                while (fgets(viewLine, sizeof(viewLine), viewFile))
                                {
                                    printf("%s", viewLine);
                                }
                                fclose(viewFile);
                            }
                            else
                            {
                                printf("Error opening or reading the file.\n");
                            }
                        }
                        else if (choice == 3)
                        {
                            // Exit the program
                            break;
                        }
                        else
                        {
                            printf("Please select a correct choice\n");
                        }
                    }
                    else
                    {
                        printf("Error opening or writing to the file.\n");
                    }
                }

                if (choice != 1 && choice != 2 && choice != 3)
                {
                    printf("Please select a correct choice\n");
                }
            }
        }

    else
    {
        printf("Failed, please try again\n");
        printf("Enter 'exit' in username to return to the menu");
    }
    }
}

