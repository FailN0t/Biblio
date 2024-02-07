﻿// Biblio.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Primer.h"
#include <vector>
#include <list>
#include <time.h>
using namespace std;

template <class T>
void write(T& t) {
	for (auto it = t.begin(); it != t.end(); it++) {
		for (auto jt = it->begin(); jt != it->end(); jt++) {
			*jt = rand() % 9 + 1;
		}
	}
}

template <class T>
void print(T& t) {
	for (auto it = t.begin(); it != t.end(); it++) {
		for (auto jt = it->begin(); jt != it->end(); jt++) {
			cout << *jt << "\t";
		}
		cout << endl;
	}
}


int main()
{

	srand(time(NULL));
	vector<vector<int>> vc(5, vector<int>(5));

	write(vc);
	
	print(vc);

	cout << endl << endl;

	list<list<int>> lt(5, list<int>(5));

	write(lt);

	print(lt);


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
