#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale>
using namespace std;

struct element
{
	string name, racca, gender, clas, age, religion, height, weight, nationality, profession;
	element* next = NULL;
};

struct Queue 
{
	element* head = NULL, * tail = NULL, * cur = NULL;
};

bool proverka(Queue& q) //Проверка списка на наличие элементов
{
	element * headTmp = q.head;
	if (q.head == NULL && q.tail == NULL) 
	{
		cout << "Список пуст\n"; 
		return true;
	}
	else 
	{
		int i = 2;
		cout << 1 << ")" << q.head << endl;
		while (q.head != NULL)
		{
			if (q.head->next != NULL)
			{
				cout << i << ")" << q.head->next << endl;
				i++;
			}
			q.head = q.head->next;
		}
		q.head = headTmp;
		return false;
	}	
}

void push(Queue& q) //Добавление элемента в список
{
	string name, racca, gender, clas, age, religion, height, weight, nationality, profession;
	cout << "Введите Имя персонажа, рассу, пол, класс, возраст, религию, рост, вес, национальность, профессию\n ";
	cout << "Имя:";
	cin >> name;
	cout << "\n Расса:";
	cin >> racca;
	cout << "\n Пол:";
	cin >> gender;
	cout << "\n Класс:";
	cin >> clas;
	cout << "\n Возраст:";
	cin >> age;
	cout << "\n Религия:";
	cin >> religion;
	cout << "\n Рост:";
	cin >> height;
	cout << "\n Вес:";
	cin >> weight;
	cout << "\n Национальность:";
	cin >> nationality;
	cout << "\n Профессия:";
	cin >> profession;

	element* e = new element;

	cout << "Вы создали элемент {{" << e << "}}" << endl;

	e->name = name;
	e->racca = racca;
	e->gender = gender;
	e->clas = clas;
	e->age = age;
	e->religion = religion;
	e->height = height;
	e->weight = weight;
	e->nationality = nationality;
	e->profession = profession;

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

void Delete(Queue& q) //удаление элемента
{
	if (proverka(q) == true) cout << "список пуст\n";
	else
	{
		element * deleteElement = q.cur;
		element * deletedNext = q.cur->next;
		for (element* cur = q.head; cur != NULL; cur = cur->next)
		{
			if (cur->next == q.cur)
			{
				q.cur = cur;
			}
		}
		q.cur->next = deletedNext;
		delete deleteElement;
		cout << "Элемент удален" << endl;
	}
	if (q.head == NULL)
	{
		q.tail = NULL;
	}

}

void DeleteALL(Queue& q) //удаление всего списка
{
	while (q.head != NULL)
	{
		element* cur = q.head;
		q.head = q.head->next;
		delete cur;
	}
	if (q.head == NULL)
	{
		q.tail = NULL;
	}
	cout << "\nСписок удален\n\n";
}

void print(Queue& q) //Вывод всех элементов списка(функции нет в тз, используется чисто для написания программы)
{ 
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{
		cout << " \n" << cur->name << " \n" << cur->racca << " \n" << cur->gender << " \n" << cur->clas << endl;
	}
}

void kolvo(Queue& q) //цикл на проверку кол-ва элементов в списке
{
	int k = 0;
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{
		k++;
	}
	cout << "В списке " << k << " элементов" << endl;
}

void move(Queue& q) //перемещение текущего элемента в списке
{
	if (q.head != NULL)
	{
		cout << "Вы находитесь в {{" << q.cur << "}} элементе" << endl;
		if (q.cur != NULL)
		{
			if (q.cur->next != NULL)
			{
				cout << "Вы желаете перейти к следующему элементу?(y - да, n - нет)" << endl;
				string answer;
				cin >> answer;
				if (answer == "y")
				{
					q.cur = q.cur->next;
					cout << "Теперь вы находитесь в " << q.cur << endl;
				}
				else
				{
					cout << "Ну нет, так нет" << endl;
				}
			}
			else
			{
				cout << "Нет следующего элемента\n";
				string answer;
				cout << "Вы желаете вернуться в начало структуры?(y - да, n - нет)" << endl;
				cin >> answer;
				if (answer == "y")
				{
					q.cur = q.head;
				}
				else
				{
					cout << "Ну нет, так нет" << endl;
				}
			}
		}
	}
	else
	{
		cout << "Список пуст, прежде чем передвигаться по списку, заполните его\n";
	}      
}

void insert(Queue& q) //вставка элемента после текущего
{
	if (q.cur != NULL)
	{
		string name, racca, gender, clas, age, religion, height, weight, nationality, profession;
		cout << "Введите Имя персонажа, рассу, пол, класс, возраст, религию, рост, вес, национальность, профессию\n ";
		cout << "Имя:";
		cin >> name;
		cout << "\n Расса:";
		cin >> racca;
		cout << "\n Пол:";
		cin >> gender;
		cout << "\n Класс:";
		cin >> clas;
		cout << "\n Возраст:";
		cin >> age;
		cout << "\n Религия:";
		cin >> religion;
		cout << "\n Рост:";
		cin >> height;
		cout << "\n Вес:";
		cin >> weight;
		cout << "\n Национальность:";
		cin >> nationality;
		cout << "\n Профессия:";
		cin >> profession;

		element* e = new element;

		cout << "Вы создали элемент {{" << e << "}}" << endl;

		e->name = name;
		e->racca = racca;
		e->gender = gender;
		e->clas = clas;
		e->age = age;
		e->religion = religion;
		e->height = height;
		e->weight = weight;
		e->nationality = nationality;
		e->profession = profession;

		if (q.head == NULL)
		{
			q.tail = e;
			q.cur = e;
			q.head = e;
		}
		else 
		{
			e->next = q.cur->next;
			q.cur->next = e;
		}
	}
}

void getValue(Queue& q) //чтение текущего элемента списка
{
	if (q.cur != NULL)
	{
		cout << "Имя: " << q.cur->name << endl;
		cout << "Расса: " << q.cur->racca << endl;
		cout << "Гендер: " << q.cur->gender << endl;
		cout << "Класс: " << q.cur->clas << endl;
		cout << "Возраст: " << q.cur->age << endl;
		cout << "Религия: " << q.cur->religion << endl;
		cout << "Рост: " << q.cur->height << endl;
		cout << "Вес: " << q.cur->weight << endl;
		cout << "Национальность: " << q.cur->nationality << endl;
		cout << "Профессия: " << q.cur->profession << endl;
		
	}
	else
	{
		cout << "Текущего элемента не существует" << endl;
	}
}