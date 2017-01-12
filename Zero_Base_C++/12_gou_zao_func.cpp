#include <iostream>
using namespace std;
class A{
	public:
		A(int x){i = x; cout << "构造函数执行!" << endl; }
		~A(){ cout << "析构函数执行!" << endl; }
		void get(void){cout << i << endl;}
	private:
		int i;
};
int main(){
	A a(99);
	a.get();
	a = A(1000);
//	a = 1000;

	return 0;
}
