#include <iostream>
using namespace std;

int main() {
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double userNum;
    int userChoice;
    double decimals;

    cout<<"Please enter a Real number:"<<endl;
    cin>>userNum;

    cout<<"Choose your rounding method: \n1. Floor round\n2. Ceiling round \n3. Round to the nearest whole number"<<endl;
    cin>>userChoice;

    decimals = userNum - int(userNum);
    switch(userChoice) {
        case 1:
            userNum = int(userNum);
            break;
        case 2:
            if(decimals > 0)
                userNum = int(userNum) + 1;
            else
                userNum = userNum;
                break;
        case 3:
            if (decimals >= 0.5)
                userNum = int(userNum) + 1;
            else if (decimals < 0.5)
                userNum = int(userNum);
                break;
        default:
            cout<<"Choice invalid"<<endl;
            break;
    }

    cout<<userNum<<endl;

    return 0;
}