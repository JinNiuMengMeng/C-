#include <iostream>
using namespace std;
class father{
	public:
		void hello(){cout << "father say \"hello\"!" << endl;}
};
class mather{
	public:
		void hello(){cout << "mather say \"hello\"!" << endl;}
};

class son : public mather, public father{
	public:
//		void hello(){cout <<"son say \"hello\"!" << endl;}
};
int main(){
	son Mike;
//	Mike.hello();系统会默认调用son类的hello函数,如果将son类中的hello函数注释掉,则程序编译将报错,程序不知道该调用mather类中的hello还是father类中的hello函数
	Mike.father::hello();//指定调用father类中的hello
	Mike.mather::hello();

	return 0;
}
