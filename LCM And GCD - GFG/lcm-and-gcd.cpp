//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    // helper function to get gcd of two numbers.
    long long gcd(long long a , long long b)
    {
      if(b == 0)
            return a;
        return gcd(b,a%b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        vector<long long> arr(2);
        
        long long g = gcd(A,B);   // gcd of two numbers.
        long long l = (A*B)/g;    // product of 2 numbers divided by their gcd gives their lcm.
        
        arr[0] = l;
        arr[1] = g;
        
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends