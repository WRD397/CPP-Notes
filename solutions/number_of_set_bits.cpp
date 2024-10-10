#include <iostream>
#include <vector>


int countSetBits(int i) {
    int count = 0;
    while (i > 0) {
        count++;
        i = (i & (i - 1)); // This clears the least significant bit set
    }
    return count;
}


std::vector<int> cacheSetCounts(int n) {
	std::vector<int> table(n+1);
	// this vector will contain the number of set bits for all the numbers till n.
	table[0] = 0;
	for (int i=1; i<=n; i++){
		
		table[i] =countSetBits(i) ;
	}
	return table;
}


int setCounter() {
	int p;
	std::cout<<"storing set counts for all the 8 bit numbers - 0 to 255"<<std::endl;

	std::vector<int> setBitCount_cache = cacheSetCounts(255);
	std::cout << "Size of the cache table is : " << setBitCount_cache.size() << std::endl;

	std::cout << "Please provide the number for which you wanna know the Count of Set Bits : ";
	std::cin >> p;

	if(p==0){
		return 0;
	}
	else{
		int setCounts = setBitCount_cache[(p&255)];
		while(p>0){
			p = p>>8;
			int temp = (p&255);
			setCounts += setBitCount_cache[temp];

		}

		return setCounts;
	}


}

int main() {
	int counts = setCounter();
	std::cout << counts << std::endl;
	return 0;
}