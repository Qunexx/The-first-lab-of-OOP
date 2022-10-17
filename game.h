#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale>
using namespace std;

struct element
{
	string data;
	string name,racca,gender,clas;
	element* next;
	

};

struct Queue 
{
	element* head = NULL, * tail = NULL, * cur = NULL;
};

void proverka(Queue& q) 
{
	if (q.head == NULL) { cout << "Список пуст\n"; }
	else { cout << "В структуре есть элементы\n"; }
}
void push(Queue& q,string n,string r,string g,string c)
{
	element* e= new element ;
	e->name = n;
	e->racca = r;
	e->gender = g;
	e->clas = c;
	e->next = NULL;
	
	

	if (q.head == NULL)
	{
		q.tail = e;
		q.cur = e;
		q.head = e;
	}
	else 
	{
		q.tail->next = e;
		q.tail = e;
	}

}

void pull(Queue& q)
{   
	element* e = q.cur;
	string name = q.cur->name;
	string racca = q.cur->racca;
	string gender = q.cur->gender;
	string clas = q.cur->clas;
	if (q.head == q.tail)
	{
		element* e = q.head;
	}
	q.cur = q.cur->next;
	free(e);


}

void print(Queue& q)
{ 
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{
		cout << " \n" << cur->name << " \n" << cur->racca << " \n" << cur->gender << " \n" << cur->clas << endl;;

	}

}

/*void movement_for_structure(Queue& q)
{
	cout << "\n Вы выбрали перемещение по элементам структуры:\n";

	while (true) {
		do  { }
	}
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{

}*/
