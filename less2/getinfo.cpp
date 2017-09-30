#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	cout << "How many carrots do you have?"<<endl;
	cin >> carrots;
	
	carrots = carrots + 2;
	
	cout << "Here are two more ";
	cout 	<< "Now you hava " //建议写法
		<< carrots 
		<< " carrots"
		<< endl;
	
	return 0;
}
