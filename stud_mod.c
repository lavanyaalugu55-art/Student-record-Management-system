#include "header.h"

void modify_student(STUD *head)
{
    STUD *temp;
    int roll, found = 0;
    float percentage;
    char ch, name[30];

    if(head==0)
    {
        printf("\nNo records available!\n");
        return;
    }

    printf("\nR : Search by roll number\n");
    printf("N : Search by name\n");
    printf("P : Search by percentage\n");

    printf("Enter choice: ");
    scanf(" %c", &ch);

    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);

        temp = head;

        while(temp != 0)
        {
            if(temp->rollno == roll)
                break;

            temp = temp->next;
        }

        if(temp == 0)
        {
            printf("Record not found!\n");
            return;
        }
    }

    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %49[^\n]", name);

        temp = head;

        while(temp != NULL)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",
                       temp->rollno, temp->name,
                       temp->percentage);
                found++;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Record not found!\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }

    else if(ch == 'p' || ch == 'P')
    {
        printf("Enter percentage: ");
        scanf("%f", &percentage);

        temp = head;

        while(temp != NULL)
        {
            if(temp->percentage == percentage)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",
                       temp->rollno, temp->name,
                       temp->percentage);
                found++;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Record not found!\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }

    else
    {
        printf("Invalid choice!\n");
        return;
    }

    temp = head;

    while(temp !=0)
    {
        if(temp->rollno == roll)
            break;

        temp = temp->next;
    }

    if(temp == 0)
    {
        printf("Record not found!\n");
        return;
    }

    printf("\nCurrent Details:\n");
    printf("Roll Number: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("\nEnter new name: ");
    scanf(" %49[^\n]", temp->name);

    printf("Enter new percentage: ");

    if(scanf("%f", &percentage) != 1 ||
       percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage!\n");
        return;
    }

    temp->percentage = percentage;

    printf("\nRecord modification successfully done\n");
}
