#include "functions.h"
int search_items(List* head) {
	system("cls");
	int choice;
	List* temp = head;
	char type1[10];
	int tem1, sp1;
	int i = 1;
	bool q = true;
	while (true) {
		printf("1 - Find elements by sc\n");
		printf("2 - Find elements by percent\n");
		printf("3 - Find elements by apprWeight\n");
		printf("4 - Find elements by numberOfStars\n");
		printf("5 - Exit\n");
		printf(">> ");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			char name1[10];
			temp = head;
			printf("\n  name>");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);
			while (temp != NULL) {
				if (strcmp(temp->sc, name1) == 0) {
					q = false;
					printf("%d- %s %d %4d %.2f\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("There's no elements found\n");
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 2:
			float num1;
			temp = head;
			printf("\n  num>");
			scanf("%d", &num1);
			setbuf(stdin, NULL);
			while (temp != NULL) {
				if (temp->percent == num1) {
					q = false;
					printf("%d- %s %d %4d %.2f\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\nThere's no elements found\n");
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 3:
			float apprWeight1;
			temp = head;
			printf("\n  apprWeight> ");
			scanf("%d", &apprWeight1);
			setbuf(stdin, NULL);
			while (temp != NULL) {
				if (temp->apprWeight == apprWeight1) {
					q = false;
					printf("%d- %s %d %4d %.2f\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\nThere's no elements found\n");
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 4:
			unsigned long long numberOfStars1;
			temp = head;
			printf("\n NumberOfStars>");
			scanf("%f", &numberOfStars1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->numberOfStars == numberOfStars1) {
					q = false;
					printf("%d- %s %d %4d %.2f\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\nThere's no elements found\n");
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 5:
			return 0;
			break;
		default:
			printf("You've entered incorrect number");
			break;
		}
	}
}