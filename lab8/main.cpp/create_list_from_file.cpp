#include "functions.h"
struct List* create_list_from_file() {
	struct List* head = (struct List*)malloc(sizeof(struct List));
	struct List* tail = head, * temp = head;
	int size = 0, i = 0;
	FILE* file = NULL;
	fopen_s(&file, "data.txt", "r");
	if (file == NULL) {
		exit(0);
	}
	char text;
	while (true) {
		text = fgetc(file);
		if (text == '\n')size++;
		else if (text == EOF) break;
	}
	fseek(file, 0, SEEK_SET);
	while (i != size) {
		fscanf_s(file, "%s", temp->sc, 5);
		fscanf_s(file, "%f", &temp->percent);
		fscanf_s(file, "%f", &temp->apprWeight);
		fscanf_s(file, "%f", &temp->numberOfStars);

		i++;
		tail->next = temp;
		tail = temp;
		temp = (List*)malloc(sizeof(List));
	}
	tail->next = NULL;
	fclose(file);
	return head;
}