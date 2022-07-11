#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void power(vector<string> &str, string s, string curr, int index){
    if(index == s.length()){
        str.push_back(curr);
        return;
    }
    power(str,s,curr,index+1);
    power(str,s,curr+s[index],index+1);
    
}
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> str;
   power(str,s,"",0);
   return str;
   
   
}