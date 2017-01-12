#include <iostream>
using namespace std;

class father{
	public:
		void get(){secret();}//public成员调用private成员
	protected:
		void room(){cout << "It's my father room!" << endl;}
	private:
		void secret(){cout << "Father's secret!" << endl;}
};
class son : public father{
	public:
//	void enjoy(){secret();}//编译失败,虽然son是father的子类,但是父类的private成员仍然不能访问
	void call(){get();}//如果要访问父类的private成员,可以通过此方式实现
};
int main(){
	son Mike;
	Mike.call();

	return 0;
}
