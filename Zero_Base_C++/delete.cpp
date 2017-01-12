#include <iostream>
using namespace std;

class A{
	public :
		A(){cout << "构造函数执行!" << endl;}
		~A(){cout << "析构函数执行!" << endl;}
};
int main(){
	A* p = new A;
	delete p;

	return 0;
}
