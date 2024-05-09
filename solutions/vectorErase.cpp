#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

int i,n,x,a,b,N, resultSize;
vector<int> vect,vect1, vect2, result;

tuple<vector<int>,int> test(){
	
	cin >> N;
	//cout << "input :";
	for (i=0; i++; i<N){
	cin >> n;
	vect.push_back(n);
	}
	
	cin >> x;
	
	vect1 = vect.erase(vect.begin()+x-1);
	vect2 = vect1.erase(vect1.begin()+a-1, vect1.begin()+b);
	
	return make_tuple(vect2, vect.size());
	
}
 


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    tie(result, resultSize) = test() ;
    cout << resultSize;
    cout << result; 
}

