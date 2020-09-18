#include <iostream>
#include <string>
using namespace std;

void changeStr(string& str);


int main() 
{
	string myStr = "Wizard";
	
	changeStr(myStr);

	cout << myStr << endl;

	system("pause");
}

void changeStr(string& str)
{
	str += "!";
}