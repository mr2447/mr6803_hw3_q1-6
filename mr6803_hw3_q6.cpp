#include <iostream>
using namespace std;

int main() {
    const int MO = 1;
    const int TU = 2;
    const int WE = 3;
    const int TH = 4;
    const int FR = 5;
    const int SA = 6;
    const int SU = 7;
    int userDay;
    double userHour;
    char temp;
    double userMinutes;
    double userLength;
    double cost;
    double sixAndMinutes;


    cout<<"Please choose from the day of the week:\n1. Mo\n2. Tu\n3. We\n4. Th\n5. Fr\n6. Sa\n7. Su"<<endl;
    cin>>userDay;

    cout<<"Please enter the time the call started (in 24-hour notation"<<endl;
    cin>>userHour>>temp>>userMinutes;

    cout<<"Please enter the length of the all in minutes"<<endl;
    cin>>userLength;

    sixAndMinutes = userHour + (userMinutes / 60);

    if(userDay <= 5 && userDay > 0){
        if(userHour >= 8 && sixAndMinutes <= 18)
            cost = userLength * 0.4;
        else if (userHour < 8 || sixAndMinutes > 18)
            cost = userLength * 0.25;
    }
    else if (userDay > 5 && userDay < 8)
        cost = userLength * 0.15;

    cout<<"The cost of the call is $"<<cost<<endl;

    return 0;


}
