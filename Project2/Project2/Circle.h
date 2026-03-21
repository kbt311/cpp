#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Circle {
public:
	void setr(int r);
	int getr();
	void setcenter(Point& p);
	Point getcenter();
private:
	int m_r;
	Point center;
};