/*         
                                                                 Hospital's Doctor appointment Program
                                                        By:Naeem Khan(23P-00028) and Bilal Ahmad Khan(23P-0584)
                                                                            BS_AI
*/

#include <stdio.h>
#include <string.h>
#include "Functions/FuncDeclaration.c"
#include "Functions/logo.c"
#include "Functions/departmentFunctions.c"
#include "Functions/doctorsFunctions.c"
#include "Functions/Admin.c"
#include "Headers/timeSwitch.h"
#include "Functions/Patient.c"
#include "Headers/depSel.h"
#include "Headers/depSwitch.h"


int main()
{
    logo();//Hospital Name

    while (1)
    {
    Menu();
    users();
    
    int User;

        printf("\n\nSelect a User:");
        scanf("%d", &User);
        if(User >=1 && User<=2)
        {
        switch (User)
        {
        case 1:
            Admin();
            break;
        case 2:
            Patient();
            break;

        default:

            printf("Invalid Input");
            break;
        }
        }
        else
        {
            printf("\nInvalid Input.Please choose 1 or 2.\n");
            while (getchar() != '\n');
        }
        
    }

    return 0;
}
