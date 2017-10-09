/*************************************************************************
    > File Name: main.cpp
    > Author: liux
    > Created Time: Sun 08 Oct 2017 10:08:46 PM EDT
 ************************************************************************/

#include<iostream>
#include "derive.h"
using namespace std;

typedef void (*Fun)(void);

int main() {
	Fun pfun = NULL;
	Derive d;
	cout << "vtable address:" << (long *)&d << endl;
	cout << "vtable first function address:" << (long *) *(long *)(&d) << endl;
	pfun = (Fun)*((long *) *(long *)(&d) + 0);
	pfun();

	pfun = (Fun)*((long *) *(long *)(&d) + 1);
	pfun();
	
	pfun = (Fun)*((long *) *(long *)(&d) + 2);
	pfun();
	
	pfun = (Fun)*((long *) *(long *)(&d) + 3);
	pfun();

	pfun = (Fun)*((long *) *(long *)(&d) + 4);
	pfun();

	return 0;
}
