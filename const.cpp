#include <iostream>
using namespace std;

class KIND{
	public:
		void func(int x, int y){i = x, j = y;}
		void print(void)const{cout << "两数相乘结果为：" << i * j << endl; }
		void show(void) {cout << "i:" << i << " j:" << j << endl;}
	private:
		int i;
		int j;
};

int main(){
	KIND kind1;
	int a = 3, b = 5;
	kind1.func(a, b);
	kind1.print();
	kind1.show();
}
