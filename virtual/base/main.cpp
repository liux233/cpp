/*************************************************************************
    > File Name: main.cpp
    > Author: liux
    > Created Time: Sun 08 Oct 2017 10:08:46 PM EDT
 ************************************************************************/

#include<iostream>
#include "base.h"
using namespace std;

typedef void (*Fun)(void);

int main() {
	Fun pfun = NULL;
	Base b;
	cout << "vtable address:" << (long *)&b << endl;
	cout << "vtable first function address:" << (long *) *(long *)(&b) << endl;
	pfun = (Fun)*((long *) *(long *)(&b) + 0);
	pfun();
	pfun = (Fun)*((long *) *(long *)(&b) + 1);
	pfun();
	pfun = (Fun)*((long *) *(long *)(&b) + 2);
	pfun();
	return 0;
}
