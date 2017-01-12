#include <iostream>
using namespace std;
class a{
	public:
	a(){cout << "类 a 的构造函数!" << endl;}
	~a(){cout << "类 a 的析构函数!~" << endl;}
};
class b{
	public:
	b(){cout << "类 b 的构造函数!" << endl;}
	~b(){cout << "类 b 的析构函数!~" << endl;}
};
class c{
	public:
	c(){cout << "类 c 的构造函数!" << endl;}
	~c(){cout << "类 c 的析构函数!~" << endl;}
};
class d{
	public:
	d(){cout << "类 d 的构造函数!" << endl;}
	~d(){cout << "类 d 的析构函数!~" << endl;}
};
class e{
	public:
	e(){cout << "类 e 的构造函数!" << endl;}
	~e(){cout << "类 e 的析构函数!~" << endl;}
};
class f : public d, public b, public a, public c, public e{

};
int main(){
	f order;
	return 0;
}
