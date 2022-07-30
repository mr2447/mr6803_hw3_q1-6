#include <iostream>
using namespace std;

int main() {
    double doublePrice1;
    double doublePrice2;
    string charMem;
    double doubleTax;
    double promo;
    double doubleResult;
    double basePrice;

    cout<<"Enter price of first item:"<<endl;
    cin>>doublePrice1;

    cout<<"Enter price of second item:"<<endl;
    cin>>doublePrice2;

    cout<<"Does customer have a club card?(Y/N):"<<endl;
    cin>>charMem;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax:"<<endl;
    cin>>doubleTax;

    basePrice = doublePrice1 + doublePrice2;

    if(doublePrice1 >= doublePrice2)
        doublePrice2 = doublePrice2 / 2;
    else
        doublePrice1 = doublePrice1 / 2;
    
    promo = doublePrice1 + doublePrice2;

    if(charMem == "Y" || charMem == "y" || charMem == "yes")
        promo = promo - (promo * 0.1);
    else if(charMem == "N" || charMem == "n" || charMem == "no")
        promo = promo;
    
    doubleResult = promo + (promo * (doubleTax / 100));

    cout<<"Base price: "<<basePrice<<endl;
    cout<<"Price after discounts: "<<promo<<endl;
    cout<<"Total price: "<<doubleResult<<endl;
    return 0;
}