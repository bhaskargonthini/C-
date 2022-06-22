#include<iostream>

using namespace std;

int main(){
    int year;
    
    char c = 'y';
    while(c == 'y'){
        cout<<"Enter the year to check whether it is a leap year or not"<<endl;
        cin>>year;
        if((((year%4==0)&&(year%100!= 0))||(year%400==0))){
        cout<<year<<" is a leap year";

        }
        else{
            cout<<year<<" is not a leap year"<<endl;
        }
        cout<<"Do you want to check for another year? "<<endl;
        cin>>c;

    }
    
    // if(year % 400 == 0){
    //     cout<<year<<"It is a leap year";
    // }
    // else if(year % 100 == 0){
    //     cout<<year<<" Is not a leap year";
    // }
    // else if(year % 4 == 0){
    //     cout<<year<<" is a leap year";
    // }
    // else{
    //     cout<<year<<" is not a leap year";
    // }
return 0;
}