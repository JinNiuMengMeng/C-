#include <iostream>
using namespace std;
class Num{
	public:
		Num(){n = 1; cout << "constructs functions executes!" <<endl;}
		Num(int i){n = i; cout << "with a parameter constructs functions executes!" <<endl;}
		~Num(){cout << "destructor functions executes!" << endl;}
		int get()const{return n;}
		void set(int x){n = x;}
		void add(){++n;}
		Num operator++(){//opertot++的返回值为一个对象
			++n;
			return Num(n);//返回Num创建的临时变量,只不过这个临时变量没有名字
		}
	private:
		int n;
};
int main(){
	Num i;
	cout << "i:" << i.get() << endl;
	i.add();
	cout << "i:" << i.get() << endl;
	Num n = ++i;//++i为函数调用,调用public中的operator++函数,该函数返回一个对象此处为对象复制给对象,因此不会报错
	cout << "n:" << n.get() << endl;
	return 0;
}
