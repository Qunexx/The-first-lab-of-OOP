// The first lab of OOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Компьютерная игра
/* 1.Проверка на наличие элементов в структуре,
   2.получение количества элементов в структуре,
   3.добавление элементов в структуру, 
   4.вставка элемента в структуру после текущего
   5.очистка структуры
   6. перемещение по элементам структуры
   7.чтение информации из текущего элемента структуры данных
   8.удаление текущего элемента структуры данных */

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale>
#include <windows.h>
#include "game.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "The program were made by Andrey Romanov from IVT-21 \n";
    cout << "This program needs to do some things which were described above the task solution \n";

    Queue myq;
    int choice;
    string name, racca, gender, clas;
    while (true)
    {
        cout << "1.Проверка на наличие элементов в структуре\n";
        cout << "2.получение количества элементов в структуре\n";
        cout << "3.добавление элементов в структуру\n";
        cout << "4.вставка элемента в структуру\n";
        cout << "5.очистка структуры\n";
        cout << "6.перемещение по элементам структуры\n";
        cout << "7.чтение информации из текущего элемента структуры данных\n";
        cout << "8.удаление текущего элемента структуры данных\n";
        cout << "9.ВЫХОД\n";
                do 
                {
                    cin >> choice;
                } while (choice < 1 || choice>9);

                switch (choice)
                {
                case 1:
                    cout << "Вы выбрали проверку на наличие элементов в структуре:\n";
                    //..............
                    proverka(myq);
                    break;



                case 2:
                    cout << "Вы выбрали вывод элементов структуры:\n";
                    print(myq);
                    break;

                case 3:
                    cout << "Вы выбрали добавление элементов в структуру:\n";
                    cout << "Введите Имя персонажа, рассу, пол, класс\n ";
                    cout << "Имя:";
                    cin >> name;
                    cout << "\n Расса:";
                    cin >> racca;
                    cout << "\n Пол:";
                    cin >> gender;
                    cout << "\n Класс:";
                    cin >> clas;
                    push(myq, name, racca, gender, clas);
                    break;
                case 4:
                    
                    break;  
                case 5:
                    break;
                case 6:
                    cout << "\n Вы выбрали перемещение по элементам структуры";
                    
                    break;
                case 7:
                    break;
                case 8:
                    cout << "Вы выбрали удаление текущего элемента из структуры данных: \n";
                    pull(myq);
                    break; 
                case 9:
                    return(0);

                }

              



    }


   
    system("PAUSE");
}




