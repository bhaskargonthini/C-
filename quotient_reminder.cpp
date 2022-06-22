#include<iostream>

using namespace std;
 int main(){
    int divisor, divident, quotient, reminder;

    cout<<"Eneter the divisor";
    cin>>divisor;

    cout<<"Enter the divident";
    cin>>divident;

    quotient = divident / divisor;
    reminder = divident % divisor;

    cout<<"The quotient is: "<<quotient<<endl;
    cout<<"The reminder is: "<<reminder;

    return 0;

 }