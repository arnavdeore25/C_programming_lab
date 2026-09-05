#include <stdio.h>
#include "lab4.h"

int main()
{
    int choice;
    do
    {
        printf("\n!!-- MENU --!!");
        printf("\n1. Read Login Time");
        printf("\n2. Read Logout Time");
        printf("\n3. Display Usage Time in HH & MM format");
        printf("\n4. Display time in Minutes");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                readLoginTime();
                break;

            case 2:
                readLogoutTime();
                break;

            case 3:
                displayDifference();
                break;

            case 4:
                displayInMinutes();
                break;

            case 5: break;

            default:
                printf("Choice Invalid\n");
        }

    } while (choice!=5);

    return 0;
}