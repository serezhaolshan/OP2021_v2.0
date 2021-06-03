#pragma once
#ifndef functions
#define functions

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>
#include <malloc.h>

using namespace std;

struct List {
	char sc[15];
	float percent;
	float apprWeight;
	int numberOfStars;
	List* next = NULL;
};

struct List* create_list(void);
void print_list(List* head);
int search_items(List* head);
struct List* add_item(int el, List tt, List* head);
struct List* delete_item(int el, List* head);
struct List* sort_list(List* head);
void record_list_to_file(List* head);
struct List* create_list_from_file();

#endif