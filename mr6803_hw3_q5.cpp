#include <iostream>
using namespace std;

int main() {
    double wInP;
    double hInI;
    double wInKg;
    double hInM;
    double bmi;
    string weightStat;
    cout<<"Please enter weight (in pounds):"<<endl;
    cin>>wInP;

    cout<<"Please enter height (in inches):"<<endl;
    cin>>hInI;

    wInKg = wInP * 0.453592;
    hInM = hInI * 0.0254;

    bmi = wInKg / (hInM * hInM);
    cout<<bmi<<endl;
    if(bmi < 18.5) 
        weightStat = "Underweight";
    else if(18.5 <= bmi && bmi < 25)
        weightStat = "Normal";
    else if(25 <= bmi && bmi < 30)
        weightStat = "Overweight";
    else if(bmi > 30)
        weightStat = "Obese";
    
    cout<<"The weight status is: "<<weightStat<<endl;


    return 0;
}