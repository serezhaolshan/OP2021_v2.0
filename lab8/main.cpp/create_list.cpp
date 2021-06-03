#include "functions.h"
struct List* create_list(void) {
	system("cls");
	List* temp, * tail; char c;
	struct List* head = tail = temp = (List*)malloc(sizeof(List));
	printf("sc: ");
	scanf_s("%s", temp->sc, 10);
	setbuf(stdin, NULL);
	printf("percent: ");
	scanf_s("%f", &temp->percent);
	printf("\apprWeight: ");
	scanf_s("%f", &temp->apprWeight);
	printf("numberOfStars: ");
	scanf_s("%d", &temp->numberOfStars);
	do {
		temp = (List*)malloc(sizeof(List));
		printf("sc: ");
		scanf_s("%s", temp->sc, 10);
		setbuf(stdin, NULL);
		printf("percent: ");
		scanf_s("%f", &temp->percent, 10);
		printf("apprWeight: ");
		scanf_s("%f", &temp->apprWeight);
		printf("numberOfStars: ");
		scanf_s("%d", &temp->numberOfStars);
		tail->next = temp;
		tail = temp;
		printf("Do you want to end entering structures elements? y/n  ");
		c = _getch();
	} while (c != 'y');
	temp->next = NULL;
	system("cls");
	return head;
}