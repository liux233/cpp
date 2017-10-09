/*************************************************************************
    > File Name: base.c
    > Author: liux
    > Created Time: Sun 08 Oct 2017 10:04:42 PM EDT
 ************************************************************************/

#include<iostream>
#include "base.h"

using namespace std;

Base::Base() {

}

Base::~Base() {

}

void Base::f() {
	cout << "Base:f()" << endl;
}

void Base::g() {
	cout << "Base::g()" << endl;
}

void Base::h() {
	cout << "Base::h()" << endl;
}


