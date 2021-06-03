#include"fun.h"
void sort_list(List* head, List*& tail) {
	struct List* temp = head;
	int lines = 0;
	while (temp != NULL) {
		temp = temp->next;
		lines++;
	}
	List* ptr, * trash, * tmp;
	tmp = (struct List*)malloc(sizeof(struct List));
	for (int n = 0; n < lines; n++) {
		ptr = head;
		while (ptr->next != NULL) {
			temp = ptr->next;
			if (strcmp(ptr->sc, temp->sc) > 0) {
				trash = temp->next;
				*tmp = *ptr;
				*ptr = *temp;
				free(temp);
				ptr->next = (struct List*)malloc(sizeof(struct List));
				*ptr->next = *tmp;
				ptr->next->next = trash;
			}
			ptr = ptr->next;
		}
		tail = ptr;
	}
	free(tmp);
}