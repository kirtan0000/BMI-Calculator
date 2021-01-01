#include <iostream>

using namespace std;

int main()
{

     float bmi;
     float weight;
     float height;

     cout << "Please Enter Your Weight(Pounds): ";
     cin >> weight;
     cout << "Please Enter Your Height(Inches): ";
     cin >> height;

     bmi = (weight * 703) / (height * height);
     cout << "Your BMI is: " << bmi << endl;

     if (bmi > 25)
     {
          cout << "You are a fat boiii :(" << endl;
     }
     else if (bmi < 25 && bmi > 18.5)
     {
          cout << "You are a healthy boiii!" << endl;
     }
     else
     {
          cout << "You are a skinny boiii :(" << endl;
     }

     return 0;
}