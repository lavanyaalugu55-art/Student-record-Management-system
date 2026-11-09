#include"header.h"
void sort_student(STUD *head)
{
	STUD *p,t,*q;
	int roll,i,j,c=countnode(head);
	char ch, name[40];
	float percentage;
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	printf("\n N/n : name base sort\n p/P : percentage base sort\n");
	printf("enter your choice: ");
	scanf(" %c",&ch);
	for(i=0;i<c-1;i++)
	{
		p=head;
		q=p->next;

		for(j=0;j<c-1-i;j++)
		{
			int sort=0;

	if(ch=='n' || ch=='N')
	{
		if(strcmp(p->name,q->name)>0)
			sort=1;
	}
	else if(ch=='p' || ch=='P')
	{
		if(p->percentage < q->percentage)
			sort=1;
	}
	else
	{
		printf("invalid\n");
		return ;
	}
	if(sort)
	{
		t.rollno=p->rollno;
		p->rollno=q->rollno;
		q->rollno=t.rollno;
		strcpy(t.name,p->name);
		strcpy(p->name,q->name);
		strcpy(q->name,t.name);
		t.percentage=p->percentage;
		p->percentage=q->percentage;
		q->percentage=t.percentage;
	}
	p=p->next;
	q=q->next;
		}
	}
}
