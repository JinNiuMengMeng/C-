#include <iostream>
using namespace std;
class demo{
	public:
		demo(){x = 0; cout << "demo的默认构造函数:" << endl;}
		demo(int i){x = i; cout << "带一个参数的demo构造函数:" << endl;}
		~demo(){cout << "demo默认析构函数:" << endl;}
		int get(){return x;}
		void set(int i){x = i;}
	private:
		int x;
};
class rectangle{
	public:
		rectangle(){x = 1000; cout << "rectangle的默认构造函数" << endl;}
		rectangle(int i, int j, int k):x(i), width(j), length(k){
			cout << "rectangle的带三个参数的构造函数 " << "长方形的面积为:"\
				<< width.get() * length.get() << endl;
		}
		~rectangle(){cout << "rectangle的默认析构函数 "  << x << endl;}
		int area(){cout << width.get() * length.get() << endl;}
	private:
		int x;
		demo length;
		demo width;
};
int main(){
	rectangle a(100, 200, 300);
	a.area();
	return 0;
}
