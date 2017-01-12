#include <iostream>
using namespace std;
const int ArSize = 10;
int sum_arr(const int  *begin, const int *end);

int main(){
	int cookies[ArSize] = {1, 2, 4, 6, 76, 764, 546};
	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "total cookies eatern:" << sum << endl;
	sum = sum_arr(cookies, cookies + 2);
	cout << "one + two + three sum:" << sum << endl;

	return 0;
}

int sum_arr(const int  *begin, const int *end){
	const int *pt = new int;
	int total = 0;
	for(pt = begin; pt != end+1; pt++){
		total += *pt;
	}
	return total;
}
