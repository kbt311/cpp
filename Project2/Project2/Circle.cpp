#include "Circle.h"


void Circle::setr(int r) {
	m_r = r;
}
int Circle::getr() {
	return m_r;
}
void Circle::setcenter(Point& p) {
	center = p;
}
Point Circle::getcenter() {
	return center;
}
