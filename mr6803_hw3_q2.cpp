#include <iostream>
using namespace std;

int main() {
    string userName;
    int userGradYear;
    int userCurrentYear;
    string userStatus;
    int difference;

    cout<<"Please enter your name:"<<endl;
    cin>>userName;

    cout<<"Please enter your graduation year:"<<endl;
    cin>>userGradYear;

    cout<<"Please enter current year:"<<endl;
    cin>>userCurrentYear;
    
    difference = userGradYear - userCurrentYear;
    if(userGradYear <= userCurrentYear)
        userStatus = "Graduated";
    else if(userGradYear > userCurrentYear && difference <= 4)
        switch(difference) {
            case 4:
                userStatus = "Freshman";
                break;
            case 3:
                userStatus = "Sophomore";
                break;
            case 2:
                userStatus = "Junior";
                break;
            case 1:
                userStatus = "Senior";
                break;
        }
    else
        userStatus = "not in college yet";
    cout<<userName<<", you are a "<<userStatus<<endl;
    return 0;
}

//   if(userGradYear <= userCurrentYear)
//         userStatus = "Graduated";