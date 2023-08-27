#include<iostream>
#include<string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{   int num1,sc;
	int Sum =0,Max =0;
	float avg;
	srand(time(NULL));
	num1 = 1+rand()%10;
	cout<<"Random number of students(1-10): ";
	cout<< num1 <<" ";
	cout<<endl;
	for(int i=1;i <= num1;i++)
	{	cout<<"Input Score "<<i<<" : ";
		cin>>sc;
		if(sc>Max)
		{
			Max = sc;
		}
			Sum = Sum+sc;
	}
	avg = Sum/num1;
	cout<<"Max Score ="<< Max <<endl;
	cout<<"Sum Score ="<< Sum <<endl;
	cout<<"Avg. Score ="<<fixed<<setprecision(2)<<avg<<endl;
	system("pause");
    return(0);
}