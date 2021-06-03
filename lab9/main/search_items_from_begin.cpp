#include"fun.h"
int search_items_from_begin(List* head, List* tail) {
	system("cls");
	int choice;
	List* temp = head;
	int i = 1;
	bool q = true;
	while (true) {
		printf("1 - Search by sc\n");
		printf("2 - Search by percent\n");
		printf("3 - Search by apprWeight \n");
		printf("4 - Search by numberOfStars\n");
		printf("5 - End\n");
		printf(">> ");

		scanf_s("%d", &choice);

		switch (choice) {

		case 1:
			char sc1[10];
			temp = head;

			printf("\n  sc>");
			scanf("%s", sc1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->sc, sc1) == 0) {
					q = false;
					printf("\n  %d- %s %d %d %i\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n Nothin' found!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:
			float percent1;
			temp = head;
			printf("percent>");
			scanf("%d", &percent1);

			while (temp != NULL) {
				if (temp->percent == percent1) {
					q = false;
					printf("%d- %s %d %d %i\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Nothing found !!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 3:

			float apprWeight1;
			temp = head;

			printf("\n  apprWeight>");
			scanf("%d", &apprWeight1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->apprWeight == apprWeight1) {
					q = false;
					printf("%d- %s %d %d %i\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Nothing found!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 4:

			int numberOfStars1;
			temp = head;

			printf("numberOfStars>");
			scanf("%f", &numberOfStars1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->numberOfStars == numberOfStars1) {
					q = false;
					printf("%d- %s %d %d %i\n", i, temp->sc, temp->percent, temp->apprWeight, temp->numberOfStars);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  Nothing found!!!\n\n");
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 5:
			printf("\n  Exiting...\n\n");
			return 0;
			break;
		default:
			printf("\n  You entered incorrect number!!!\n\n");
			break;
		}
	}
}