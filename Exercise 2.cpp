#include <iostream>
#include <string>
using namespace std;
int main()
{  cout << "***Homework 2***" << endl;
	string name;
	int Sa;
	int s;
	float con;
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> Sa;
	cout << "Enter Sale : ";
	cin >> s;
	cout << "Enter Commission Percent : ";
	cin >> con;
	cout << "---output---" << endl;
	cout << "Your name = " << name << endl;
	cout << "Total Revenue " << Sa+(s*(con/100)) <<" Bath" << endl;
	system("pause");
	return (0);
}
