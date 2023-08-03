#include <iostream>
#include <string>
using namespace std;
int main()
{  
	cout <<"*******QUIZZES*******"<<endl;
    float b1;
	float b2;
	float b3;
	float b4;
    float b5;
	cout <<"Enter first quizzes (10) : ";
	cin >> b1;
	cout <<"Enter second quizzes (10) : ";
	cin >> b2;
	cout <<"Enter third quizzes (10) : ";
	cin >> b3;
	cout <<"*******MID-TERM********"<<endl;
	cout <<"Enter mid-term (40) : ";
	cin >> b4;
	cout <<"*******FINAL**********"<<endl;
	cout <<"Enter final (50) : ";
	cin >>b5;
	float b6 = (b1+b2+b3)/3;
	cout <<"Quizz Toatal :" <<b6<<endl;
	cout <<"Mid term : "<<b4<<endl;
	cout <<"Final : "<<b5<<endl;
	cout <<"Total : "<<b4+b5+b6<<endl;
}