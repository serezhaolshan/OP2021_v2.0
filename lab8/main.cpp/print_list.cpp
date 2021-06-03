#include "functions.h"
void print_list(List* head){
	system("cls");
	List* temp;
	temp = head;
	int i = 1;
	while (temp != NULL) {
		printf("%d- %s %f %f %i\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
		temp = temp->next;
		i++;
	}
}