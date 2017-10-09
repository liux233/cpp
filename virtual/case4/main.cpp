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

	long ** pVtab = (long **) &d;
	pfun = (Fun)pVtab[0][0];
	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 0) + 0);
	pfun();

	pfun = (Fun)pVtab[0][1];
	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 0) + 1);
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 0) + 2);
	pfun = (Fun)pVtab[0][2];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 0) + 3);
	pfun = (Fun)pVtab[0][3];
	pfun();

	
	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 1) + 0);
	pfun = (Fun)pVtab[1][0];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 1) + 1);
	pfun = (Fun)pVtab[1][1];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 1) + 2);
	pfun = (Fun)pVtab[1][2];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 2) + 0);
	pfun = (Fun)pVtab[2][0];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 2) + 1);
	pfun = (Fun)pVtab[2][1];
	pfun();

	//pfun = (Fun)*((long *) *(long *)((long *)(&d) + 2) + 2);
	pfun = (Fun)pVtab[2][2];
	pfun();

	return 0;
}
