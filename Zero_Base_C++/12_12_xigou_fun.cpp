#include <iostream>

using namespace std;
class father{
	public:
		father(int x){a = x; cout << "构造父类对象! 成员的值为:" << a << endl;}
		~father(){cout << "析构父类对象! 成员的值为:" << a  << endl;}
	private:
		int a;
};
class son : public father{
	public:
		son(int z, int x, int y):father(x), Mike(y){b = z; cout << "构造子类对象! 成员的值为:" << b << endl;}
		~son(){cout << "析构子类对象! 成员的值为:"<< b << endl;}
	private:
		int b;
		father Mike;
};
int main(){
	son Mick(3, 1, 2);
	return 0;
}
