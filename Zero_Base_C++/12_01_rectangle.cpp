#include <iostream>

using namespace std;

class rectangel{
	public:
		rectangel(int l, int w){length = l; width = w;}
		rectangel(){cout << "构造函数执行完毕！" << endl;}
		int area(void){return length * width;}
		~rectangel(){cout << "析构函数执行完毕！" << endl;}
	private:
		int length;
		int width;
};

int main(){
	rectangel a(4, 6);
	cout << "长方形的面积：" << a.area() << endl;
	rectangel b;

	return 0;
}
