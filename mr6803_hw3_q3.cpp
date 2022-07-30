#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double userA;
    double userB;
    double userC;
    double determineSolution;
    double negB;
    double sqrtResult;
    double twA;
    double p1;
    double p2;
    string numberOfSolutions;
    cout<<"Please enter value of a:"<<endl;
    cin>>userA;

    cout<<"Please enter value of b:"<<endl;
    cin>>userB;

    cout<<"Please enter value of c:"<<endl;
    cin>>userC;

    determineSolution = (userB * userB) - (4 * userA * userC);
    if(userA != 0) {
        if (determineSolution < 0) {
            numberOfSolutions = "zero";
            cout<<"This equation has "<<numberOfSolutions<<" real solution"<<endl;
        }
        else {
            negB = 0 - userB;
            sqrtResult = sqrt(determineSolution);
            twA = 2 * userA;

            p1 = (negB + sqrtResult) / twA;
            p2 = (negB - sqrtResult) / twA;

            if(p1 == p2) {
                numberOfSolutions = "a single";
                cout<<"This equation has "<<numberOfSolutions<<" real solution "<<"x= "<<p1<<endl;
            }
            else {
                numberOfSolutions = "two";
                cout<<"This equation has "<<numberOfSolutions<<" real solutions "<<"x="<<p1<<" or x="<<p2<<endl;
            }
                

        }
    }    
    else
        cout<<"Value a is illegal"<<endl;
    

    return 0;
}