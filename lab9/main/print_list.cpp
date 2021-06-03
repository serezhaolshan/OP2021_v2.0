#include"fun.h"
void print_list(List* p, List* head, List* tail) {
	system("cls");
	int i = 1;
	if (p == head)
		while (p != NULL) {
			printf("%d- %s %f  %f  %i\n", i, p->sc, p->percent, p->apprWeight, p->numberOfStars);
			i++;
			p = p->next;
		}
	else if (p == tail)
		while (p != NULL) {
			printf("%d- %s %f  %f  %i\n", i, p->sc, p->percent, p->apprWeight, p->numberOfStars);
			i++;
			p = p->v1;
		}
	else
		printf("Incorrect adress");
}