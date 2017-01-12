#include <iostream>
using namespace std;
class rectangle{
	public:
//		rectangle():length(3), width(4){cout << "长方形的面积是:" \
			<< length * width << endl;}
		rectangle(int length = 3, int width = 4){cout << "长方形的面积是:" \
			<< length * width << endl;}
		int area(){return length * width;}
	private:
		const int length;
		int width;
};
int main(){
	rectangle a;

	return 0;
}
