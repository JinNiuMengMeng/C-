#include <iostream>
using namespace std;
class Num{
	public:
		Num(){n = 1;}
		~Num(){}
		int get(){return n;}
		void add(){++n;}//与下面的operator做对比
		void operator++(){++n;}//代表重载的++运算符
	private:
		int n;
};
int main(){
	Num i;//Num派生一个子类i
	++i;//类i++,可以进行自加运算,是因为Num类中(sperator)重载了++运算符,
	cout << "operator\tclass i : " << i.get() << endl;

	i.add();
	cout << "add()\t\tclass i : " << i.get() << endl;
	return 0;
}
