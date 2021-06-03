#include "fun.h"
#include <iostream> 
using namespace std;

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice, el;
	List tt;
	bool what = false;
	struct List* head = NULL, * tail = NULL;
	while (true){
		printf("1 - Create list\n");
		printf("2 - Print from start\n");
		printf("3 - Print from end\n");
		printf("4 - Search by criterea from start\n");
		printf("5 - Search by criterea from end\n");
		printf("6 - Add element \n");
		printf("7 - Delete element\n");
		printf("8 - Sort\n");
		printf("9 - Record into file \n");
		printf("10 - new list from file\n");
		printf("11 - Exit\n");
		printf(">> ");
		scanf_s("%d", &choice);
		if (choice == 1 || choice == 8) what = true;
		switch (choice) {
		case(1): {
			create_list(head, tail);
			break;
		}
		case(2): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			print_list(head, head, tail);
			break;
		}
		case(3): {
			if (tail == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			print_list(tail, head, tail);
			break;
		}
		case(4): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			else
				search_items_from_begin(head, tail);
			break;
		}
		case(5): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			else
				search_items_from_begin(head, tail);
			break;
		}
		case(6): {
			cout << "Enter number of ins element -> ";
			scanf_s("%d", &el);
			cout << "Enter value of ins element -> ";
			printf("\n  sc: ");
			scanf_s("%s", tt.sc, 10);
			setbuf(stdin, NULL);
			printf("\n  type: ");
			scanf_s("%d", &tt.percent, 10);
			printf("\n  apprWeight: ");
			scanf_s("%d", &tt.apprWeight);
			printf("\n  numberOfStars: ");
			scanf_s("%i", &tt.numberOfStars);
			add_item(el, tt, head, tail);
			break;
		}
		case(7): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			else {
				cout << "Enter number of element you want delete -> ";

				scanf_s("%d", &el);
				delete_item(el, head, tail);
			}
			break;
		}
		case(8): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			else
				sort_list(head, tail);
			break;
		}
		case(9): {
			if (head == NULL) {
				printf("No sturcture!!!\n\n");
				break;
			}
			else
				record_list_to_file(head, tail);
			break;
		}
		case(10): {
			head = NULL;
			tail = NULL;
			create_list_from_file(head, tail);
			break;
		}
		case(11): {
			printf("Exit\n");
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