//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int dup=n;
		    int RevNum=0;
		    while(n>0){
		        int lastdigit=n%10;
		        RevNum=(RevNum*10)+lastdigit;
		        n=n/10;
		        
		    }
		    if(RevNum==dup) cout<<"Yes";
		        else cout<<"No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends