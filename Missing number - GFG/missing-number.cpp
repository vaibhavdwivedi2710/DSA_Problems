//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    int ans1=0;
    int ans2=0;
    for(int i=0;i<N-1;i++){
        ans2=ans2^A[i];
        ans1=ans1^(i+1);
    }
    ans1=ans1^N;
    return ans1^ans2;
}