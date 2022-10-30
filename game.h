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

bool proverka(Queue& q) //�������� ������ �� ������� ���������
{
	element * headTmp = q.head;
	if (q.head == NULL && q.tail == NULL) 
	{
		cout << "������ ����\n"; 
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

void push(Queue& q) //���������� �������� � ������
{
	string name, racca, gender, clas, age, religion, height, weight, nationality, profession;
	cout << "������� ��� ���������, �����, ���, �����, �������, �������, ����, ���, ��������������, ���������\n ";
	cout << "���:";
	cin >> name;
	cout << "\n �����:";
	cin >> racca;
	cout << "\n ���:";
	cin >> gender;
	cout << "\n �����:";
	cin >> clas;
	cout << "\n �������:";
	cin >> age;
	cout << "\n �������:";
	cin >> religion;
	cout << "\n ����:";
	cin >> height;
	cout << "\n ���:";
	cin >> weight;
	cout << "\n ��������������:";
	cin >> nationality;
	cout << "\n ���������:";
	cin >> profession;

	element* e = new element;

	cout << "�� ������� ������� {{" << e << "}}" << endl;

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

void Delete(Queue& q) //�������� ��������
{
	if (proverka(q) == true) cout << "������ ����\n";
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
		cout << "������� ������" << endl;
	}
	if (q.head == NULL)
	{
		q.tail = NULL;
	}

}

void DeleteALL(Queue& q) //�������� ����� ������
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
	cout << "\n������ ������\n\n";
}

void print(Queue& q) //����� ���� ��������� ������(������� ��� � ��, ������������ ����� ��� ��������� ���������)
{ 
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{
		cout << " \n" << cur->name << " \n" << cur->racca << " \n" << cur->gender << " \n" << cur->clas << endl;
	}
}

void kolvo(Queue& q) //���� �� �������� ���-�� ��������� � ������
{
	int k = 0;
	for (element* cur = q.head; cur != NULL; cur = cur->next)
	{
		k++;
	}
	cout << "� ������ " << k << " ���������" << endl;
}

void move(Queue& q) //����������� �������� �������� � ������
{
	if (q.head != NULL)
	{
		cout << "�� ���������� � {{" << q.cur << "}} ��������" << endl;
		if (q.cur != NULL)
		{
			if (q.cur->next != NULL)
			{
				cout << "�� ������� ������� � ���������� ��������?(y - ��, n - ���)" << endl;
				string answer;
				cin >> answer;
				if (answer == "y")
				{
					q.cur = q.cur->next;
					cout << "������ �� ���������� � " << q.cur << endl;
				}
				else
				{
					cout << "�� ���, ��� ���" << endl;
				}
			}
			else
			{
				cout << "��� ���������� ��������\n";
				string answer;
				cout << "�� ������� ��������� � ������ ���������?(y - ��, n - ���)" << endl;
				cin >> answer;
				if (answer == "y")
				{
					q.cur = q.head;
				}
				else
				{
					cout << "�� ���, ��� ���" << endl;
				}
			}
		}
	}
	else
	{
		cout << "������ ����, ������ ��� ������������� �� ������, ��������� ���\n";
	}      
}

void insert(Queue& q) //������� �������� ����� ��������
{
	if (q.cur != NULL)
	{
		string name, racca, gender, clas, age, religion, height, weight, nationality, profession;
		cout << "������� ��� ���������, �����, ���, �����, �������, �������, ����, ���, ��������������, ���������\n ";
		cout << "���:";
		cin >> name;
		cout << "\n �����:";
		cin >> racca;
		cout << "\n ���:";
		cin >> gender;
		cout << "\n �����:";
		cin >> clas;
		cout << "\n �������:";
		cin >> age;
		cout << "\n �������:";
		cin >> religion;
		cout << "\n ����:";
		cin >> height;
		cout << "\n ���:";
		cin >> weight;
		cout << "\n ��������������:";
		cin >> nationality;
		cout << "\n ���������:";
		cin >> profession;

		element* e = new element;

		cout << "�� ������� ������� {{" << e << "}}" << endl;

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

void getValue(Queue& q) //������ �������� �������� ������
{
	if (q.cur != NULL)
	{
		cout << "���: " << q.cur->name << endl;
		cout << "�����: " << q.cur->racca << endl;
		cout << "������: " << q.cur->gender << endl;
		cout << "�����: " << q.cur->clas << endl;
		cout << "�������: " << q.cur->age << endl;
		cout << "�������: " << q.cur->religion << endl;
		cout << "����: " << q.cur->height << endl;
		cout << "���: " << q.cur->weight << endl;
		cout << "��������������: " << q.cur->nationality << endl;
		cout << "���������: " << q.cur->profession << endl;
		
	}
	else
	{
		cout << "�������� �������� �� ����������" << endl;
	}
}