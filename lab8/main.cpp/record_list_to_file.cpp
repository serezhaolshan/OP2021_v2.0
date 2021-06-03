#include "functions.h"
void record_list_to_file(List* head) {
	system("cls");
	List* temp;
	temp = head;
	int i = 1;
	FILE* f;
	fopen_s(&f, "data.txt", "w");
	if (!f) {
		puts("error opening");
		exit(0);
	}
	while (temp != NULL)
	{
		fprintf_s(f, "%c %f %f %d\n", temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
		temp = temp->next;
		i++;
	}
	fclose(f);
}