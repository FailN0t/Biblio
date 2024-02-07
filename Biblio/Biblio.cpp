// Biblio.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Primer.h"
#include <vector>
#include <list>
#include <time.h>
#include <map>
using namespace std;

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
	//Student() :Student("Ivanov", "Ivan", "Ivanovich", -1) {

	//}
	void print() {
		cout << "Famili = " << Famili << endl;
		cout << "Imya = " << Imya << endl;
		cout << "Otch = " << Otch << endl;
		cout << "age = " << age << endl;
	}
};


class MpStud:public Student {
	map<string, map<string, map<string, map<int, Student*>>>> mpS;

public:
	MpStud(string Famili = "Ivanov",
		string Imya = "Ivan",
		string Otch = "Ivanovich",
		int age = -1) {
		mpS[Famili][Imya][Otch][age] = new Student(Famili, Imya, Otch, age);
	}

	void add(string Famili = "Ivanov",
		string Imya = "Ivan",
		string Otch = "Ivanovich",
		int age = -1) {
		mpS[Famili][Imya][Otch][age] = new Student(Famili, Imya, Otch, age);
	}

	Student& getStudent(string Famili = "Ivanov",
		string Imya = "Ivan",
		string Otch = "Ivanovich",
		int age = -1) {
		return *mpS[Famili][Imya][Otch][age];
	}

	void print() {

		for (auto it = mpS.begin(); it != mpS.end(); it++) {
			for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
				for (auto kt = jt->second.begin(); kt != jt->second.end(); kt++) {
					for (auto mt = kt->second.begin(); mt != kt->second.end(); mt++) {
						mt->second->print();
						cout << endl << endl;
					}
				}
			}
		}
		

	}

};





int main()
{


	MpStud mpst ("Vasin", "Igor", "Olegovich", 12);
	mpst.add();
	mpst.add("Hieder", "Geni", "Olegovich", 12);
	mpst.add("Vasin", "Igor", "Olegovich", 56);
	mpst.add("Vasin", "Igor", "Olegovich", 56);

	mpst.print();

	mpst.getStudent("Vasin", "Igor", "Olegovich", 12).print();

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
