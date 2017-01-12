#include <iostream>
using namespace std;
const int Arsize = 16;

int main(){
	long long factorials[Arsize];
	factorials[1] = factorials[0] = 1LL;

	for(int i = 2; i < Arsize; i++){
		factorials[i] = i * factorials[i - 1];
	}
	for(int i = 0; i < Arsize; i++){
		std::cout << i << "!= " << factorials[i] << std::endl;
	}
	return 0;
}
