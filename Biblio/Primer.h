#pragma once
#include <iostream>
class Primer
{
	int i;

public:
	Primer(int i);
	Primer();
	void operator++();
	void mess();
	void print();
	~Primer();
};

