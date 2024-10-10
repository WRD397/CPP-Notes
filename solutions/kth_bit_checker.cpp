#include <iostream>

bool test(int n, int k) {
        int temp = 1 << k;
        std::cout << temp << std::endl;
        std::cout << (n&temp) << std::endl;
        if((n&temp) == 0){
            std::cout << "no" <<std::endl;
        }
        else {
            std::cout << "yes" << std::endl;
        }

        return true;
}


int main() {
	int n,k;
	n = 10;
	k = 0;
	test(n,k);
	return 0;
}