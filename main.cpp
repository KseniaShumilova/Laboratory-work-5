﻿#include <iostream>
#include "Deque.h"
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    Deque D;
    const int n = 10;
    int a[n] = { 0,1,2,3,4,5,6,7,8,9 };
    // Добавляем элементы, стоящие на четных индексах, в голову, на нечетных - в хвост
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            D.PushFront(a[i]);
        else
            D.PushBack(a[i]);
    // Распечатка списка
    cout << "Исходный двунаправленный список D:\n";
    D.Print();
    cout << endl;
    // Вставка элемента в список
    cout << "Задание: вставить элемент в двунаправленный список." << endl;
    D.Insert();
    // Распечатка списка
    cout << "Двунаправленный список со вставленным элементом:\n";
    D.Print();
    cout << endl;
    cout << "Задание: просмотр доступного элемента двунаправленного списка." << endl;
    // Распечатка 2-го и 8-го элементов списка
    D.Print(2);
    D.Print(8);
    cout << endl;
    cout << "Задание: удаление доступного элемента двунаправленного списка." << endl;
    D.Del(5);
    cout << "Позиция удаляемого элемента: 5\n" << "Двунаправленный список с удаленным элементом:\n";
    D.Print();
    cout << endl;
    cout << "Задание: проверить наличие элементов.\n";
    cout << "Количество элементов двунаправленного списка: " << D.GetSize() << endl << endl;
    //cout << endl;
    Deque T;
    // Копируем список
    T = D;
    // Распечатка копии
    cout << "Копия двунаправленного списка T:\n";
    T.Print();
    cout << endl;
    cout << "Задание: вставка элемента в начало двунаправленного списка (PushFront)." << endl;
    T.PushFront(0);
    cout << "Двунаправленный список со вставленным элементом в начале: " << endl;
    T.Print();
    cout << endl;
    cout << "Задание: вставка элемента в конец двунаправленного списка (PushBack)." << endl;
    T.PushBack(1);
    cout << "Двунаправленный список со вставленным элементом в конце: " << endl;
    T.Print();
    cout << endl;
    cout << "Задание: возврат значения первого элемента двунаправленного списка (PeekFront)." << endl;
    cout << "Первый элемент двунаправленного списка: ";
    T.PeekFront();
    cout << endl;
    cout << "Задание: возврат значения последнего элемента двунаправленного списка (PeekBack)" << endl;
    cout << "Последний элемент двунаправленного списка: ";
    T.PeekBack();
    cout << endl;
}