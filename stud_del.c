#include "header.h"

void delete_student(STUD **head)
{
    STUD *temp, *prev;
    int roll, found = 0;
    char ch, name[50];

    if(*head ==0)
    {
        printf("\nNo records available!\n");
        return;
    }

    printf("\nR : Delete by roll number\n");
    printf("N : Delete by name\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);
// search by rollno
    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
//search by name
    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %s", name);

        temp = *head;

        printf("\nMatching records:\n");

        while(temp !=0)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       temp->rollno, temp->name,
                       temp->percentage);
                found = 1;
            }

            temp = temp->next;
        }

        if(!found)
        {
            printf("Student not found!\n");
            return;
        }

        printf("Enter roll number to delete: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid\n");
        return;
    }

    temp = *head;
    prev =0;

    while(temp!=0)
    {
        if(temp->rollno == roll)
        {
            if(prev == 0)
                *head = temp->next;
            else
                prev->next = temp->next;

            free(temp);

            printf("\nRecord deleted successfully!\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("\nRecord not found!\n");
}
