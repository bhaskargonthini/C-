#include<iostream>

using namespace std;

int main(){
    int fact, result = 1;
    char c = 'y';
    while (c == 'y')
    {
        cout<<"Enter the value of fact:"<<endl;
        cin>>fact;
        for (int i = fact; i >= 1; i--)
        {
            /* code */
            result*= i;

        }
        cout<<"The factorial of "<<fact<<" is: "<<result<<endl;
        result = 1;        
        cout<<"Do you want to check for another value: "<<endl;
        cin>>c;
        /* code */
    }
    
return 0;
}