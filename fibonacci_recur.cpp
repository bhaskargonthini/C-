#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int fibonacci(int n)
{
    //Your code here
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

// { Driver Code Starts.\

int main() {
	int T;
	
	//taking total testcases
	scanf("%d", &T);
	while (T--)
	{
	    int n;
	    //taking number n
	    scanf("%d", &n);
	    
	    //calling fibonacci() function
	    printf("%d\n", fibonacci(n));
	    
	    
	}
	return 0;
} 