/*************************************************************************
    > File Name: derive.h
    > Author: liux
    > Created Time: Sun 08 Oct 2017 10:25:52 PM EDT
 ************************************************************************/
#include "base.h"
#include "base2.h"
#include "base3.h"

class Derive : public Base, public Base2, public Base3{
public:
	Derive();
	~Derive();
	virtual void f();
	virtual void g1();
};
