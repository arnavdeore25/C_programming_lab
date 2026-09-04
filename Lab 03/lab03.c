#include <stdio.h>
#include <stdlib.h>
#include "userdefinedheader.h"

void education()
{
    int ch, option;
    short rollno, marks[5], mrk;
    float cgpa;
    char grade, name[30];

    do
    {
        printf("\n\n##----- EDUCATION MENU -----##");
        printf("\n1. Datatypes and Attributes");
        printf("\n2. Looping Statements");
        printf("\n3. Conditional Statements");
        printf("\n4. Custom Header File");
        printf("\n5. Exit");
        printf("\nEnter your option: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\n\n#--- Enter Student Details ---#");

                printf("\nEnter Roll No: ");
                scanf("%hd", &rollno);

                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter CGPA: ");
                scanf("%f", &cgpa);

                printf("Enter Grade: ");
                scanf(" %c", &grade);

                printf("\n\n#--- Student Details ---#");
                printf("\nName : %s", name);
                printf("\nRoll No: %hd", rollno);
                printf("\nCGPA: %f", cgpa);
                printf("\nGrade: %c", grade);
                break;

            case 2:
            {
                printf("\n\n--- FOR LOOP DEMONSTRATION ---");

                for(int i = 0; i < 5; i++)
                {
                    printf("\nEnter Subject %d Marks: ", i + 1);
                    scanf("%hd", &marks[i]);
                }

                printf("\n\n--- WHILE LOOP DEMONSTRATION ---");

                int j = 0;

                while(j < 5)
                {
                    printf("\nSubject %d Marks = %hd", j + 1, marks[j]);
                    j++;
                }

                printf("\n\n--- DO WHILE LOOP DEMONSTRATION ---");

                do
                {
                    printf("\n1. View Attendance");
                    printf("\n2. Exit");
                    printf("\nEnter Option: ");
                    scanf("%d", &option);

                    switch(option)
                    {
                        case 1:
                            printf("\nDo while loop");
                            break;

                        case 2:
                            printf("\nExiting Attendance Menu...");
                            break;

                        default:
                            printf("\nInvalid Option");
                    }

                } while(option != 2);

                break;
            }

            case 3:
            {
                printf("\n\n--- IF ELSE DEMONSTRATION ---");

                printf("\nEnter Marks: ");
                scanf("%hd", &mrk);

                if(mrk >= PASS_MARKS)
                {
                    printf("\nStudent Passed");
                }
                else
                {
                    printf("\nStudent Failed");
                }

                printf("\n\n--- ELSE IF LADDER (GRADE) ---");

                if(mrk >= 90)
                    printf("\nGrade A+");
                else if(mrk >= 70)
                    printf("\nGrade A");
                else if(mrk >= 50)
                    printf("\nGrade B");
                else if(mrk >= 35)
                    printf("\nGrade C");
                else
                    printf("\nGrade F");

                break;
            }

            case 4:
                printf("\n\n#--- Values From Header File ---#");
                printf("\nMaximum Students: %d", MAXIMUM_STUDENTS);
                printf("\nPassing Marks: %d", PASS_MARKS);
                printf("\nMaximum Subjects: %d", MAXIMUM_SUBJECTS);
                break;

            case 5:exit(0);

            default:
                printf("\nInvalid Input!");
        }

    } while(ch != 5);
}

int main()
{
    int ch;

    do
    {
        printf("\n\n##----- MAIN MENU -----##");
        printf("\n1. Medical");
        printf("\n2. Banking");
        printf("\n3. Education");
        printf("\n4. Gaming");
        printf("\n5. Exit");

        printf("\nEnter your option: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nPlease Select Option 3 (Education)");
                break;

            case 2:
                printf("\nPlease Select Option 3 (Education)");
                break;

            case 3:
                education();
                break;

            case 4:
                printf("\nPlease Select Option 3 (Education)");
                break;

            case 5:
                printf("\nProgram Terminated.");
                break;

            default:
                printf("\nInvalid Option!");
        }

    } while(ch != 5);

    return 0;
}