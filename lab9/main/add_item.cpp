#include"fun.h"
void add_item(int el, List tt, List* head, List* tail) {
	List* temp = (List*)malloc(sizeof(List));

	if (el == 1) {
		temp->next = head;
		head = temp;
	}
	else {
		List* temp_pos = head;
		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;
		temp->next = temp_pos->next;
		temp_pos->next = temp;
	}
	strcpy(temp->sc, tt.sc);
	temp->percent = tt.percent;
	temp->apprWeight = tt.apprWeight;
	temp->numberOfStars = tt.numberOfStars;
}