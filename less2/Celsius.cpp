#include <iostream>

using namespace std;
int main()
{
	cout << "intput  a Celsius value:" << endl;
	
	int celsius;
	cin >> celsius;
	
	double fahrenheit = 1.8 * celsius + 32;
	
	cout << "Fahrenheit value is :" << fahrenheit << endl;

	return 0;
}
