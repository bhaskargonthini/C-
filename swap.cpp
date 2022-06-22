#include<iostream>

using namespace std;

int main(){
    int x, y;

    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"Enter the value of y: "<<endl;
    cin>>y;
    x = x^y;
    y = x^y;
    x = x^y;

    cout<<"The number after swapping are: "<<endl;
    cout<<"x is: "<<x<<endl;
    cout<<"y is: "<<y<<endl;

}