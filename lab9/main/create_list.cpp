#include"fun.h"
void create_list(struct List*& head, struct List*& tail)
{
	List* p, * pred;
	pred = NULL;
	do {
		p = (List*)malloc(sizeof(List));
		printf("sc: ");
		scanf_s("%s", p->sc, 10);
		setbuf(stdin, NULL);
		printf("percent: ");
		scanf_s("%f", &p->percent);
		printf("apprWeight: ");
		scanf_s("%f", &p->apprWeight);
		printf("numberOfStars: ");
		scanf_s("%i", &p->numberOfStars);
		p->v1 = pred;
		if (pred != NULL)
			pred->next = p;
		else
			head = p;
		pred = p;
		puts("End? (y/n)");
	} while (_getch() != 'y');
	tail = p;
	tail->next = NULL;
}