#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

struct Node *head;

int main()
{
	// struct Node *tail;
	struct Node *p, *q;
	int n;

	printf("Now it's time to create a linked list. Input data, -1 for EOL:\n");

	head = malloc(sizeof(Node));
	p = head;

	while (scanf("%d", &n) != EOF && n != -1)
	{
		q = malloc(sizeof(Node));
		q->data = n;
		p->next = q;

		p = p->next;
	}
	printf("---end of input---\n");
	p->next = NULL;


	printf("The following is your linked list:\n");
	p = head->next;
	while (p != NULL)
	{
		printf("%d\t", p->data);
		p = p->next;
	}

	return 0;
}