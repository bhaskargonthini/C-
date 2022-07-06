#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x = 0, res = 0, res1 = 0, sn;
        for(int i=0;i<nums.size();i++){
            x = x^nums[i];
        }
        sn = x&~(x-1);
        for(int i=0;i<nums.size();i++){
            if((nums[i] & sn)!= 0) res = res^nums[i];
            else res1 = res1^nums[i];
        }
        vector<int> result;
        if(res<res1){
            result.push_back(res);
            result.push_back(res1);
        }
        else{
            result.push_back(res1);
            result.push_back(res);
        }
        
        
        return result;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}