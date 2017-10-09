/*************************************************************************
    > File Name: derive.h
    > Author: liux
    > Created Time: Sun 08 Oct 2017 10:25:52 PM EDT
 ************************************************************************/
#include "base.h"

class Derive : public Base{
public:
	Derive();
	~Derive();
	virtual void f();
	virtual void g1();
	virtual void h1();
};
