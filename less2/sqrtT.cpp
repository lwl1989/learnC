#include "sqrt.h"
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	
	double area;
	cout << "Enter the floor area" << endl;
	cin >> area;

	double side;
	side = F(area);
	cout << side << endl;
	return 0;
}
