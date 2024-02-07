// Biblio.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Primer.h"
#include <vector>
#include <list>
#include <time.h>
#include <map>
using namespace std;

class Student;


class MpStud:public Student {
	map<string, map<string, map<string, map<int, Student>>>> mpS;


};

class Student {
protected:
	string Famili;
	string Imya;
	string Otch;
	int age;
public:
	Student(string Famili = "Ivanov",
		string Imya = "Ivan",
		string Otch = "Ivanovich",
		int age = -1) {

		this->Famili = Famili;
		this->Imya = Imya;
		this->Otch = Otch;
		this->age = age;

	}
	void print() {
		cout << "Famili = " << Famili << endl;
		cout << "Imya = " << Imya << endl;
		cout << "Otch = " << Otch << endl;
		cout << "age = " << age << endl;
	}
};



int main()
{
	map<string, int> mp;

	multimap<string, int> mlp;

	mlp.insert(pair<string, int>("Fedya", 45));
	mlp.insert(pair<string, int>("Georgi", 23));
	mlp.insert(pair<string, int>("Alisa", 12));
	mlp.insert(pair<string, int>("Alisa", 29));
	mlp.insert(pair<string, int>("Alisa", 29));


	mp["Sasha"] = 12;
	mp["Yulya"] = 20;
	mp["Kolya"] = 16;
	mp["Kolya"] = 56;

	pair<map<string, int>::iterator, bool> err = mp.insert(pair<string, int>("Vasya", 90));

	if (err.second == false) {
		cout << "err" << endl;
		cout << err.first->first << "\t" << err.first->second << endl;
	}

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << "first " << it->first << "\t" << "second " << it->second << endl;
	}

	cout << endl << endl;

	for (auto it = mlp.begin(); it != mlp.end(); it++) {
		cout << "first " << it->first << "\t" << "second " << it->second << endl;
	}

	for (auto it = mlp.find("Alisa"); it->first == "Alisa"; it++) {
		cout << "first " << it->first << "\t" << "second " << it->second << endl;
	}


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
