//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    bool isPrime(int n) {
        bool result = true;
        if (n==1){
            return false;
        }
        
        else {
            if (n < 4){
                return true;
            }
            
            else {
            for(int i=2; i*i<=n; i++){
                if (n%i==0){
                    result=false;
                    return result;
                    }
                }
            }
        }
        
        return result;
    }
    
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int numCounter=0;
        if (N < 4) {
            return 0;
        }
        else {
            for(int i=1; i<=N; i++){
                int divisorCounter=0;
                if(!isPrime(i)){
                    for(int j=2; j<i; j++){
                        if(i%j==0){
                            divisorCounter++;
                        }
                        if(divisorCounter>1){
                            break;
                        }

                    }
                }
                if(divisorCounter==1){
                    numCounter++;
                }
            }

        }
        
        return numCounter;
        
    }
};

//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends