#include <iostream>

using namespace std;

    int main()
{
        double kg;

        double mt;

        cout << "please enter your weight as KG :";

        cin >> kg;

        cout << "please enter your height as Meters";
        
        cin >> mt;

        cout << "your BMI is: " << kg / (mt * mt);
}


