#include "functions.h"

int main(void) {

	int choice, el;
	struct List* head = NULL;
	List tt;
	bool what = false;

	while (true) {

		printf("1 - Create List\n");
		printf("2 - Print List\n");
		printf("3 - Search by criterea\n");
		printf("4 - Adding element\n");
		printf("5 - Delete element\n");
		printf("6 - Sort\n");
		printf("7 - Save list in file \n");
		printf("8 - Creating new list from file \n");
		printf("9 - Exit\n");
		printf("> ");
		scanf_s("%d", &choice);
		if (choice == 1 || choice == 8) what = true;
		switch (choice) {
		case(1): {
			head = create_list();
			break;
		}
		case(2): {
			if (head == NULL) {
				printf("There's no structure");
				break;
			}
			print_list(head);
			break;
		}
			
		case(3): {
			if (head == NULL) {
			printf("There's no structure");
			break;
			}
			else {
				search_items(head);
			}
			
			break;
		}
			
			case(4): {
				printf("Enter number of inserted element: ");
				scanf_s("%f", &el);
				printf("Enter inserting meanings: ");
				printf("sc: ");
				scanf_s("%c", tt.sc, 10);
				setbuf(stdin, NULL);
				printf("Percent: ");
				scanf_s("%f", &tt.percent);
				printf("ApprWeight: ");
				scanf_s("%f", &tt.apprWeight);
				printf("numberOfStars: ");
				scanf_s("%d", &tt.numberOfStars);
				head = add_item(el, tt, head);
				break;
		}

			case(5): {
				if (head == NULL) {
					printf("There's no structure\n");
					break;
				}
				else {
					printf("Enter number of deleted element: ");
					scanf_s("%f", &el);
					head = delete_item(el, head);
				}
				break;
			}
			case(6): {
				if (head == NULL) {
					printf("There's no structure\n");
					break;
				}
				else
					head = sort_list(head);
				break;
			}
			case(7): {
				if (head == NULL) {
					printf("There's no structure\n");
					break;
				}
				else
					record_list_to_file(head);
				break;
			}
			case(8): {
				head = create_list_from_file();
				break;
			}
			case(9): {
				return 0;
			}
			default: {
				system("cls");
				printf("Incorrect number\n");
				break;
			}
		}
	}
	free(head);
	return 0;
}