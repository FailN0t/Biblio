#include "Primer.h"
using namespace std;


Primer::Primer(int i) :i{ i } {
	cout << "init i" << endl;
}

Primer::Primer() :Primer(5) {}

void Primer::operator++() {
	++i;
}

void Primer::mess() {
	cout << "Hello" << endl;
}

void Primer::print() {
	cout << i << endl;
}

Primer::~Primer() {
	cout << "dest " << this << endl;
}
