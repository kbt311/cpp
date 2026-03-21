#include <iostream>
using namespace std;
#include "Circle.h"
#include "Point.h"

void is(Point& p, Circle& c) {
	int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	int r_distance = c.getr() * c.getr();
	if (distance > r_distance) cout << "点在圆外" << endl;
	else if (distance < r_distance) cout << "点在圆内" << endl;
	else cout << "点在圆上" << endl;
}
int main() {
	int p_x , p_y;
	cin >> p_x >> p_y;
	Point p1;
	p1.setx(p_x);
	p1.sety(p_y);
	int c_r, c_x, c_y;
	cin >> c_r >> c_x >> c_y;
	Circle c1;
	Point p2;
	p2.setx(c_x);
	p2.sety(c_y);
	c1.setr(c_r);
	c1.setcenter(p2);
	is(p1, c1);
	return 0;
}