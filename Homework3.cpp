
#include <iostream>
using namespace std;
int main()
{
 int Amo;
 int M1000,M100,M50,M20;
 cout << "Amount to be withdraw : " ;
 cin >> Amo ;
 M1000 = Amo / 1000;
 M100 = (Amo % 1000)/100 ;
 M50 = (Amo %100)/50 ;
 M20 = (Amo %50)/20 ;
 cout << "\n1000 : " <<M1000 <<endl;
 cout << "100 : " <<M100 <<endl;
 cout << "50 : " <<M50 <<endl;
 cout << "20 : " <<M20 <<endl;
return(0);
}
