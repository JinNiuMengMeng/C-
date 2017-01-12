#include <iostream>
#include <vector>
#include <array>

using namespace std;
int main(){
	double str1[4] = {1.0, 1.1, 1.2, 1.3};
	
	vector<double> str2(4);
	str2[0] = 2.0;
	str2[1] = 2.1;
	str2[2] = 2.2;
	str2[3] = 2.3;

	array<double, 4>str3 = {{3.0, 3.1, 3.2, 3.3}};

	std::cout << "str1[0]:" << str1[0] << std::endl;
	std::cout << "str1[1]:" << str1[1] << std::endl;
	std::cout << "str1[2]:" << str1[2] << std::endl;
	std::cout << "str1[3]:" << str1[3] << std::endl;

	std::cout << "str2[0]:" << str2[0] << std::endl;
	std::cout << "str2[1]:" << str2[1] << std::endl;
	std::cout << "str2[2]:" << str2[2] << std::endl;
	std::cout << "str2[3]:" << str2[3] << std::endl;

	std::cout << "str3[0]:" << str3[0] << std::endl;
	std::cout << "str3[1]:" << str3[1] << std::endl;
	std::cout << "str3[2]:" << str3[2] << std::endl;
	std::cout << "str3[3]:" << str3[3] << std::endl;
	return 0;
}
