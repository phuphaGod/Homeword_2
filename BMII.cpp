#include <iostream>
#include <string>
using namespace std;
int main()
{
  float W;
  float H;
  int age;
  string gender;
  cout <<"Age : ";
  cin >> age;
  cout <<"Gender : ";
  cin >> gender;
  cout <<"Eenter Height : ";
  cin >> H;
  cout <<"Eenter Weight : ";
  cin >> W;
  float bmi = W / (H/100*H/100);
  cout <<"BMI : "<< bmi <<endl;
  if (bmi <= 16&& bmi <=17) cout <<"Severe Thinness\n";
  else if (bmi >=17&& bmi <=18.5) cout <<"Moderate Thinness\n";
  else if (bmi >=18.5&& bmi <=25) cout <<"Mild Thinness\n";
  else if (bmi >=25&& bmi <=30) cout <<"Normal\n";
  else if (bmi >=30&& bmi <=35) cout <<"Overweight\n";
  else if (bmi >=35&& bmi <=40) cout <<"Obese Class I\n";
  else if (bmi >=40&& bmi <=41) cout <<"Obese Class II\n";
  else printf("Obese Class III\n");
  return (0);
}