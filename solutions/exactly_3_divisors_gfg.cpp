//{ Driver Code Starts
//Initial Template for C++

/*

##### QUESTION

Given a positive integer value n. The task is to find how many numbers less than or equal to n have numbers of divisors exactly equal to 3.

Examples:

Input: n = 6
Output: 1
Explanation: The only number less than 6 with 3 divisors is 4 which has 1, 2 and 4 as divisors.
Input: n = 10
Output: 2
Explanation: 4 and 9 have 3 divisors.
Your Task:
You don't need to read input or print anything. Your task is to complete the function exactly3Divisors() that takes n as input parameter and returns count of numbers less than or equal to n with exactly 3 divisors.

Expected Time Complexity : O(n1/2 * n1/4)
Expected Auxilliary Space :  O(1)

Constraints :
1 <= n <= 109

*/


// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function Template for C++

// class Solution{
    
//     public:
//     bool isPrime(int n) {
//         bool result = true;
//         if (n==1){
//             return false;
//         }
        
//         else {
//             if (n < 4){
//                 return true;
//             }
            
//             else {
//             for(int i=2; i*i<=n; i++){
//                 if (n%i==0){
//                     result=false;
//                     return result;
//                     }
//                 }
//             }
//         }
        
//         return result;
//     }
    
//     public:
//     int exactly3Divisors(int N)
//     {
//         //Your code here
//         int numCounter=0;
//         if (N < 4) {
//             return 0;
//         }
//         else {
//             for(int i=1; i<=N; i++){
//                 int divisorCounter=0;
//                 if(!isPrime(i)){
//                     for(int j=2; j<i; j++){
//                         if(i%j==0){
//                             divisorCounter++;
//                         }
//                         if(divisorCounter>1){
//                             break;
//                         }

//                     }
//                 }
//                 if(divisorCounter==1){
//                     numCounter++;
//                 }
//             }

//         }
        
//         return numCounter;
        
//     }
// };

// //{ Driver Code Starts.


// int main()
//  {
//     int T;
    
//     //taking testcases
//     cin>>T;
//     while(T--)
//     {
//         int N;
        
//         //taking N
//         cin>>N;
//         Solution ob;
//         //calling function exactly3Divisors()
//         cout<<ob.exactly3Divisors(N)<<endl;
//     }
// 	return 0;
// }
// // } Driver Code Ends





//######### APPROACH 2

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
    
    public :
    bool has3Divisor(int n) {
        // return true if n has exactly 3 divisor else false.
        // please pass only the non primes to reduce the no of iteration - as primes will ALWAYS HAVE 2 DIVISORS - 1 & itself.
        // self hypothesis - if n can be divided by any integers betweeen 2 to sqrt(n) (excluding sqrt(n)) at least once - n has more than 3 divisors
        // self hypothesis2 - if the number is square of a Prime - ONLY THEN it will have exact 3 divisors.
        
        if(isPrime(n)){
            return false;
        }
        else{
            for(int i=2; i*i < n; i++) {
                if(n%i==0){
                    return false;
                }
            }
            return true;
        }
    }
    
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int numCounter=0;
        
        if(N<4){
            return 0;
        }
        else {
            for(int i=4; N; i++){
                if(has3Divisor(i)){
                    numCounter++;
                }
            }
        }
        
        return numCounter;
        
        
    }



    //aproach3
    // self hypothesis2 - if the number is square of a Prime - ONLY THEN it will have exact 3 divisors.

    public:
    std::vector<int> foo(N):{
        std::vector<int> result;

        for(i=2; i*i <= N; i++){
            primeFlag=true;
            //now we need to check if we can divide the number "i" with any of the previous Primes

            for(num:result){
                if(i%num==0){
                    primeFlag=false;
                    break;
                }
            }
            
            if(primeFlag){
                if(i*i<N);{
                    result.push_back(i);
                }
                else{
                    break;
                }
                
            }
        }

        return result
    }

    public:
    int exactly3Divisors(int N){
        //Your code here        
        if(N<4){
            return 0;
        }
        else {
            std::vector<int> divisors = foo(N);
        }
        
        return sizeof(divisors)/sizeof(divisors[0]);
        
        
    }

};

//{ Driver Code Starts.









int main()
 {
    cin>>N;
    Solution ob;
    //calling function exactly3Divisors()
    cout<<ob.exactly3Divisors(N)<<endl;

    return 0;
}
// } Driver Code Ends




