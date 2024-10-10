/*
PROBLEM ::: 
Given an integer N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Example 1:

Input: 
N = 18
Output: 
2
Explanation: 
Binary representation of 18 is 010010,the first set bit from the right side is at position 2.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10E8
*/

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if((n&1)!=0){
            return 1;
        }
        else{
            if (n==0){
                return 0;
            }
            else{
                int temp = (n & (n-1));
                int powerOf2 = log2((n-temp));
                return powerOf2+1;                
            }

            
        }

    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int n;
    cout << "Please provide the integer input : ";
    cin>>n; //input n
    cout<<"Input : "<<n<<endl;
    Solution ob;
    printf("Position of the last set bit : %u\n", ob.getFirstSetBit(n)); // function to get answer
    return 0;
}

// } Driver Code Ends