#include <iostream>
using namespace std;

class Human{
	public:
		void stand(){cout << "This is Human class and base class!" << endl;}
};
class father : public Human{
};

class mather : public Human{
};

class son : public mather, public father{
};
int main(){
	son Mike;
//	Mike.stand();//错误调用方式,编译器不知道调用的stand()函数是father与mather类,那个继承来的.
	Mike.father::stand();//必须指明引用的是哪一个类的成员函数

	return 0;
}
